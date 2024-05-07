/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/30 23:59:33 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_format(va_list argument, const char word);

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	argument;

	i = 0;
	size = 0;
	va_start(argument, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_format(argument, str[i + 1]);
			i++;
		}
		else
			size += ft_print_char(str[i]);
		i++;
	}
	va_end(argument);
	return (size);
}

static int	ft_format(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_print_char(va_arg(argument, int));
	else if (word == 's')
		size += ft_print_str(va_arg(argument, char *));
	else if (word == 'p')
		size += ft_print_pointer(va_arg(argument, unsigned long long));
	else if (word == 'd' || word == 'i')
		size += ft_print_number(va_arg(argument, int));
	else if (word == 'u')
		size += ft_print_unsigned(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_print_hex(va_arg(argument, unsigned int), word);
	else
		size += ft_print_char(word);
	return (size);
}
/*#include "libft.h"


int main() {
    char caracter = 'A';
    char cadena[] = "Hola, mundo!";
    void *puntero = (void *)0x12345678;
    int entero = 42;
    unsigned int sin_signo = 123;
    int hexadecimal = 0xABCD;

    // Prueba de diferentes formatos de impresión
    ft_printf("Caracter: %c\n", caracter);
    ft_printf("Cadena: %s\n", cadena);
    ft_printf("Puntero: %p\n", puntero);
    ft_printf("Decimal: %d\n", entero);
    ft_printf("Entero: %i\n", entero);
    ft_printf("Sin signo: %u\n", sin_signo);
    ft_printf("Hexadecimal (minúsculas): %x\n", hexadecimal);
    ft_printf("Hexadecimal (mayúsculas): %X\n", hexadecimal);
    ft_printf("Símbolo del porcentaje: %%\n");

    return 0;
}*/
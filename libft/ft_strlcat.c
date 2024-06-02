/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/12 11:51:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	if (i == size)
		return (size + src_len);
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	else if (size > 0)
		dst[size - 1] = '\0';
	return (dst_len + src_len);
}
/*int 	main()
{
	const	char *origen = "hola";
	char 		 destino[20] = " mundo";
	

	size_t	resultado = ft_strlcat(destino, origen, 20);
	if(resultado)
	{
		printf("el resultado es: %zu\n", resultado);
		printf("%s\n", destino);
		
	}else{
		printf("ERROR CADENA NULA");
	}
	return 0; 
}*/
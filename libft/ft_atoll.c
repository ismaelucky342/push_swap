/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:52:41 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 12:52:56 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

long long int ft_atoll(const char *str) {
    long long int result = 0;
    int sign = 1;

    // Ignorar espacios en blanco iniciales
    while (*str && (*str == ' ' || *str == '\t'))
        str++;

    // Manejar signo
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Convertir dígitos a entero
    while (*str && (*str >= '0' && *str <= '9')) {
        result = (result * 10) + (*str - '0');
        str++;
    }

    // Aplicar signo
    return result * sign;
}

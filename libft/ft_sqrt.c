/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:13:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:14:22 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_sqrt(int x) {
    if (x < 0) {
        return 0;
    }

    int i = 0;
    while (i * i <= x) {
        if (i * i == x) {
            // Si encontramos una solución exacta, devolvemos i.
            return i;
        }
        i++;
    }
    return 0;
}

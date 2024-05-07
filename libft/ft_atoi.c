/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/12 11:46:38 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*int		main()
{
	
    const char *str1 = "123";
    const char *str2 = "-456";
    const char *str3 = "   789";
    const char *str4 = "   +987";
    const char *str5 = "   -654";
    const char *str6 = "   123abc";

    printf("'%s' convertido a entero: %d\n", str1, ft_atoi(str1));
    printf("'%s' convertido a entero: %d\n", str2, ft_atoi(str2));
    printf("'%s' convertido a entero: %d\n", str3, ft_atoi(str3));
    printf("'%s' convertido a entero: %d\n", str4, ft_atoi(str4));
    printf("'%s' convertido a entero: %d\n", str5, ft_atoi(str5));
    printf("'%s' convertido a entero: %d\n", str6, ft_atoi(str6));

    return 0;
}*/
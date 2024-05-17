/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_brute_force.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:11:54 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:39:47 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dup_brute_force(int *numbers, int count)
{
	int		i;
	int		j;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (numbers[i] == numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:05:12 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:05:53 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insert_sort(int array[], int n)
{
	int	element;
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		element = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > element)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
		i++;
	}
}
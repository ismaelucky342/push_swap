/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2Xarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:50:22 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:39:27 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2Xarray(char **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr && arr[i])
		{
			if (arr[i] != NULL)
			{
				free(arr[i]);
				arr[i] = NULL;
			}
			i++;
		}
		free(arr);
		arr = NULL;
	}
}
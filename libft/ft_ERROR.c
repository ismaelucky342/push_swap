/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ERROR.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:48:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:39:36 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ERROR(char *error_msg, bool yeet)
{
	write(2, error_msg, ft_strlen(error_msg));
	if (yeet == true)
		exit(EXIT_FAILURE);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/24 12:12:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_line(char *msg, int32_t line, char *file, int32_t exit_nbr)
{
	ft_printf_fd(STDERR_FILENO, "%s @ %s %s", msg, line, file);
	if (exit_nbr >= 0)
		exit(exit_nbr);
}

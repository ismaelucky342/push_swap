/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:38:43 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:56:16 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_digits(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
				&& argv[i][j] != '-')
				return (-1);
			if (ft_isdigit(argv[i][j]) && (argv[i][j + 1] == ' ' || argv[i][j
					+ 1] == '\0'))
				count += 1;
			j++;
		}
		i++;
	}
	return (count);
}

void	check_range(char **s_numbers, int *numbers)
{
	int	i;

	i = 0;
	while (s_numbers[i])
	{
		if (ft_atoll(s_numbers[i]) > INT_MAX \
			|| ft_atoll(s_numbers[i]) < INT_MIN \
			|| ft_strlen(s_numbers[i]) > 11)
		{
			ft_free_2Xarray(s_numbers);
			free(numbers);
			ft_ERROR(RED "Error", 1);
		}
		i++;
	}
}

int	*arg_parse(int argc, char **argv, int count)
{
	char	**s_numbers;
	int		*numbers;
	int		i;
	int		j;
	int		k;

	numbers = (int *)malloc(sizeof(int) * count);
	if (!numbers)
		return (NULL);
	i = 0;
	j = 0;
	while (++i < argc)
	{
		s_numbers = ft_split(argv[i], ' ');
		if (!s_numbers)
			ft_ERROR("", 1);
		check_range(s_numbers, numbers);
		k = 0;
		while (s_numbers[k])
			numbers[j++] = ft_atoi(s_numbers[k++]);
		ft_free_2Xarray(s_numbers);
	}
	return (numbers);
}

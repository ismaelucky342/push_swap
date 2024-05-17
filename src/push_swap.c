/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:38:43 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/17 12:54:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		count;
	int		*numbers;

	if (argc == 1)
		ft_ERROR("", 1);
	count = check_digits(argc, argv);
	numbers = arg_parse(argc, argv, count);
	if (count <= 1 || ft_dup_brute_force(numbers, count))
	{
		free(numbers);
		if (count == 1)
			ft_ERROR("", 1);
		ft_ERROR(RED"Error", 1);
	}
	init_stack(&stack_a, &stack_b, numbers, count);
	sort(&stack_a, &stack_b, numbers, count);
	free(numbers);
	free_stack(&stack_a);
	return (0);
}

void	init_stack(t_stack *stack_a, t_stack *stack_b, int *nb, int c)
{
	int		i;
	t_node	*tmp;

	stack_b->head = NULL;
	stack_a->head = NULL;
	stack_b->size = 0;
	stack_a->size = 0;
	i = c - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, nb[i]);
		i--;
	}
	ft_insert_sort(nb, c);
	tmp = stack_a->head;
	while (tmp)
	{
		tmp->s_index = ft_index(tmp->data, nb);
		tmp = tmp->next;
	}
}

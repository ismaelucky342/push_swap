/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 07:34:35 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/24 12:43:11 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_rot_sort(t_stack *stack, int min_s_index)
{
	int	a;
	int	b;
	int	c;

	(void)min_s_index;
	a = stack->head->data;
	b = stack->head->next->data;
	c = stack->head->next->next->data;
	if (a < b && b < c)
		return (1);
	if (b < c && a > c)
		return (1);
	if (c < a && a < b)
		return (1);
	return (0);
}

void	simple_sort(t_stack *stack, int length)
{
	int		min_s_index;
	int		r;

	if (is_sorted(stack))
		return ;
	min_s_index = get_min_index(stack);
	r = count_r(stack->head, min_s_index);
	if (is_rot_sort(stack, min_s_index))
	{
		if (r < length - r)
			rotate(stack, 'a', TRUE);
		else
			reverse_rotate(stack, 'a', TRUE);
	}
	else
	{
		swap(stack, 'a', TRUE);
		if (is_sorted(stack))
			return ;
		if (r < length - r)
			rotate(stack, 'a', TRUE);
		else
			reverse_rotate(stack, 'a', TRUE);
	}
}

void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	min_index;
	int	iter;
	int	n;

	iter = 0;
	n = length;
	while (iter++ < n - 3)
	{
		min_index = get_min_index(stack_a);
		if (count_r(stack_a->head, min_index) <= n - min_index - \
			count_r(stack_a->head, min_index))
			while (stack_a->head->s_index != min_index)
				rotate(stack_a, 'a', TRUE);
		else
			while (stack_a->head->s_index != min_index)
				reverse_rotate(stack_a, 'a', TRUE);
		if (is_sorted(stack_a) && stack_b->size == 0)
			return ;
		push(stack_b, stack_a, 'b', TRUE);
		length--;
	}
	simple_sort(stack_a, length);
	iter = 0;
	while (iter++ < n - 3)
		push(stack_a, stack_b, 'a', TRUE);
}

void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while (stack_a->head)
	{
		if (stack_a->head->s_index <= i)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
		}
		else if (stack_a->head->s_index <= i + range)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
			if (!(stack_a->head->s_index <= i + range))
				rotate_both(stack_a, stack_b);
			else
				rotate(stack_b, 'b', TRUE);
		}
		else
			rotate(stack_a, 'a', TRUE);
	}
}

void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(stack_b->head, length - 1);
		rrb_count = (length + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while (stack_b->head->s_index != length - 1)
				rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
		else
		{
			while (stack_b->head->s_index != length - 1)
				reverse_rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
	}
}

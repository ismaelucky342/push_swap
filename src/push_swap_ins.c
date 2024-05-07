/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/07 22:25:11 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swaps the first two elements of a stack
int swap(t_list **stack)
{
    if (ft_lstsize(*stack) < 2)
        return (-1);

    t_list *head = *stack;
    t_list *next = head->next;

    int tmp_val = head->value;
    int tmp_index = head->index;

    head->value = next->value;
    head->index = next->index;
    next->value = tmp_val;
    next->index = tmp_index;

    return (0);
}

// Pushes the first element of 'stack_from' to the top of 'stack_to'
int push(t_list **stack_to, t_list **stack_from)
{
    if (!stack_to || !stack_from || !(*stack_from))
    {
        ft_putstr_fd("Error: Invalid stack.\n", 2);
        return (-1);
    }

    t_list *tmp = *stack_from;
    *stack_from = (*stack_from)->next;

    tmp->next = *stack_to;
    *stack_to = tmp;

    return (0);
}

// Rotates the stack by moving the first element to the end
void rotate_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return;

	head = *stack;
	tail = ft_lstlast(head);

	*stack = head->next;
	head->next = NULL;
	tail->next = head;
}

// Reverse rotates the stack by moving the last element to the beginning
void reverse_rotate_stack(t_list **stack)
{
	t_list	*prev_last;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return;

	prev_last = NULL;
	last = *stack;

	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}

	prev_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

// Performs 'pa' operation, which pops an element from 'stack_b' and pushes it to 'stack_a'
int pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

// Performs 'pb' operation, which pops an element from 'stack_a' and pushes it to 'stack_b'
int pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

// Rotates 'stack_a' by one position
int ra(t_list **stack_a)
{
	rotate_stack(stack_a);
	ft_putendl_fd("ra", 1);
	return (0);
}

// Rotates 'stack_b' by one position
int rb(t_list **stack_b)
{
	rotate_stack(stack_b);
	ft_putendl_fd("rb", 1);
	return (0);
}

// Performs 'rr' operation, which rotates both 'stack_a' and 'stack_b' by one position
int rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b)< 2)
		return (-1);

	rotate_stack(stack_a);
	rotate_stack(stack_b);

	ft_putendl_fd("rr", 1);
	return (0);
}

// Reverse rotates 'stack_a' by one position
int rra(t_list **stack_a)
{
	reverse_rotate_stack(stack_a);
	ft_putendl_fd("rra", 1);
	return (0);
}

// Reverse rotates 'stack_b' by one position
int rrb(t_list **stack_b)
{
	reverse_rotate_stack(stack_b);
	ft_putendl_fd("rrb", 1);
	return (0);
}

// Performs 'rrr' operation, which reverse rotates both 'stack_a' and 'stack_b' by one position
int rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (-1);

	reverse_rotate_stack(stack_a);
	reverse_rotate_stack(stack_b);

	ft_putendl_fd("rrr", 1);
	return (0);
}
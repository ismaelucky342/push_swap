/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:38:43 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/13 13:39:14 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	swap(t_stack *stack, char x, bool b)
{
	t_node	*tmp;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
	if (b)
	{
		write(1, "s", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	push(t_stack *stack1, t_stack *stack2, char x, bool b)
{
	int	index;

	if (stack2->head == NULL)
		return ;
	index = stack2->head->s_index;
	push_stack(stack1, index, pop_stack(stack2));
	if (b)
	{
		write(1, "p", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	rotate(t_stack *stack, char x, bool b)
{
	t_node	*tmp;
	t_node	*current;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	current = stack->head;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (b)
	{
		write(1, "r\n", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	reverse_rotate(t_stack *stack, char x, bool b)
{
	t_node	*current;
	t_node	*tmp;

	if (!stack->head || !stack->head->next || !stack)
		return ;
	current = stack->head;
	while (current->next->next != NULL)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = stack->head;
	stack->head = tmp;
	if (b)
	{
		write(1, "rr", 2);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

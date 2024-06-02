/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:36:10 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/24 12:41:51 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, 'a', FALSE);
	rotate(stack_b, 'b', FALSE);
	write(1, "rr\n", 3);
}

void	swap_both(t_stack *stack1, t_stack *stack2)
{
	rotate(stack1, 'a', FALSE);
	rotate(stack2, 'b', FALSE);
	write(1, "ss\n", 3);
}

void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a, 'a', FALSE);
	reverse_rotate(stack_b, 'b', FALSE);
	write(1, "rrr\n", 3);
}

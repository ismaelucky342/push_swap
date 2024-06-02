/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 05:57:33 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/31 16:14:40 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "../libft/libft.h"

//colors 
# define RED "\e[0;31m"
# define YEL "\e[0;33m"

//push swap structures
typedef struct s_node
{
	int				data;
	int				s_index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;

//push swap functions 
int			*parse(int argc, char **argv, int length);
int			check_digits(int argc, char **argv);
void		check_range(char **s_numbers, int *numbers);
int			is_sorted(t_stack *stack);
int			count_r(t_node *stack, int index);
int			get_min_index(t_stack *stack);
void		free_stack(t_stack *stack);
void		reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);
void		push(t_stack *stack1, t_stack *stack2, char x, t_bool b);
void		rotate_both(t_stack *stack_a, t_stack *stack_b);
void		reverse_rotate(t_stack *stack, char x, t_bool b);
void		swap_both(t_stack *stack1, t_stack *stack2);
void		rotate(t_stack *stack, char x, t_bool b);
void		swap(t_stack *stack, char x, t_bool b);
void		sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length);
void		s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int i);
void		k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
void		k_sort2(t_stack *stack_a, t_stack *stack_b, int length);
void		simple_sort(t_stack *stack, int length);
void		init(t_stack *stack_a, t_stack *stack_b, int *nb, int c);
void		push_stack(t_stack *stack, int index, int data);
int			pop_stack(t_stack *stack);

#endif 
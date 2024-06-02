/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/13 03:10:12 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main() {
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    node1->next = node2;
    node2->next = node3;

    int size = ft_lstsize(node1);

    printf("Size of the linked list: %d\n", size);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
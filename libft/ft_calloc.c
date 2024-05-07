/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/12 11:47:38 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

/*int main() {
    int *array;
    int size = 5;

    array = (int *)calloc(size, sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Error al asignar memoria\n");
        return 1; 
    }
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    printf("Contenido del array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    free(array);
    return 0; 
}*/

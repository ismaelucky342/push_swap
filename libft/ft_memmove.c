/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/12 11:51:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	if (dest <= src)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
	}
	else
	{
		dest_cpy += n;
		src_cpy += n;
		while (n--)
			*--dest_cpy = *--src_cpy;
	}
	return (dest);
}
/*int		main(){

	char	destino[] = "abcde";
	char	origen[] = "poiss";
	size_t	t = 5; 

	void	*resultado = ft_memmove(destino, origen, t);
	printf("la cadena resultante es: %s", (char *)resultado); 
	return 0; 
}*/
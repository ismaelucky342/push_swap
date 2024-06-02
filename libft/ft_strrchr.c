/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/20 18:29:18 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
/*int		main(){
	const	char *string1 = "fsdahsa";
	int		byte =  'a';

	char	*ultimaAparicion = ft_strrchr(string1, byte);

	if(ultimaAparicion){
		printf("Caracter %s encontrado en posicion %i",
	   	ultimaAparicion, ultimaAparicion-string1);

	}else {
		printf("ERROR");
	}
	return (0);
}*/

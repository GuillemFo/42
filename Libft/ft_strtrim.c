/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:10 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/19 20:24:46 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//trim ha de checkear cada uno de los valores de set, si encuenra un valor de set 
//lo quita, si el siguente es el valor 2 de set lo quita pero si no lo es ya recorre hasta el final para avanzar.

//Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’,
//hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3)


























/*
char	*ft_copym(char *dst, char *s1, size_t possrc, size_t posdst)
{
	if (dst[posdst] != '\0')
		dst[posdst] = s1[possrc];
	return (dst);
}

size_t	ft_checker(char *s1, char const *set, size_t i)
{
	size_t	a;

	a = 0;
	while (s1[i] != set[a] && set[a] != '\0')
		a++;
	if (s1[i] == set[a])
		return (0);
	return (1);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens1;
	char	*news1;
	size_t	news1pos;
	size_t	i;
	char	*s1c;

	s1c = (char *)s1;
	i = 0;
	lens1 = ft_strlen(s1);
	news1pos = 0;
	news1 = malloc(lens1 + 1 * sizeof(char));
	while (s1c[i] != '\0')
	{
		if (ft_checker(s1c, set, i) == 1)
		{
			ft_copym(news1, s1c, i, news1pos);
			news1pos++;
			i++;
		}
		if (ft_checker(s1c, set, i) == 0)
			i++;
	}
	news1[news1pos] = '\0';
	return (news1);
}

#include <stdio.h>

int	main(void)
{
	char	s1[18] = "Hola buenas tardes";
	char	set[4] = "abs";

	printf("%s\n", ft_strtrim(s1, set));
}
*/
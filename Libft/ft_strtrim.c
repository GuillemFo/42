/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:10 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/22 16:03:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//trim ha de checkear cada uno de los valores de set, si encuenra un valor de set 
//lo quita, si el siguente es el valor 2 de set lo quita pero si no lo es ya recorre hasta el final para avanzar.

//Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’,
//hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3)

size_t	ft_check(const char *s11, const char *set, size_t i)
{
	size_t	j;

	j = 0;
	while (s11[i] == set[j])
	{
		i++;
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;
	char	*s2;
	char	*s11;
	s2 = (char *)s1;
	s11 = (char *)s1;
	i = 0;
	j = 0;
	while(s11[i] != set[0] && s11[i] != '\0' && set[0] != '\0')
	{
		s2[j] = s11[i];
		i++;
		j++;
	}
	if (s11[i] == set[0])
		i = ft_check(s11, set, i);
	while(s11[i] != '\0')
	{
		s2[j] = s11[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

#include <stdio.h>

int	main(void)
{
	char	s1[24] = "uno absabs z";
	char	set[4] = "abs";

	printf("%s\n", ft_strtrim(s1, set));
}

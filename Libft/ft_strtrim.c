/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:10 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/22 15:43:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//trim ha de checkear cada uno de los valores de set, si encuenra un valor de set 
//lo quita, si el siguente es el valor 2 de set lo quita pero si no lo es ya recorre hasta el final para avanzar.

//Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’,
//hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3)

size_t	ft_check(const char *s1, const char *set, size_t i)
{
	size_t	j;

	j = 0;
	while (s1[i] == set[j])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s2;
	size_t	len2;

	len2 = ft_strlen(s1);
	s2 = s2[len2 +1];
	i = 0;
	j = 0;
	while(s1[i] != set[0] && s1[i] != '\0' && set[0] != '\0')
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	if (s1[i] == set[0])
		i = ft_check(s1, set, i);
	while(s1[i] != '\0')
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	//s2[j] = '\0';
	return (s2);
}

#include <stdio.h>

int	main(void)
{
	char	s1[18] = "Hola buenas tardes";
	char	set[4] = "abs";

	printf("%s\n", ft_strtrim(s1, set));
}

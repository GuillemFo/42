/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:10 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/19 15:32:20 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set) // set son los caracteres a eliminar de la string s1 solo por delante y por detras.
{
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			
			
		}
	}
// if (s1[0] == set)i++ != set,  X = s1[en pos != set] // if (s1[X] != set), i++, guarda en X, setl = ft_strlen(set),
// s1[X + setl] hasta != '\0' == s1 newl . // strcut = malloc(newl +1 * (char)) // copy    

	return (strcut);
}

#include <stdio.h>

int	main(void)
{
	char	s1[18] = "Hola buenas tardes";
	char	set[2] = "a";

	printf("%s\n", ft_strtrim(s1, set));
}

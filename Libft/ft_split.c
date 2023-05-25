/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/25 19:12:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_counter(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			j++;
		i++;
	}
	return (j);
}

int	main()
{
	printf("%d\n", ft_counter("Hola omo    eee     a", ' '));
}



char	**ft_split(char const *s, char c)
{
	char	**s2;

	s2 = malloc (ft_counter(s, c) * (sizeof(char *) + 1));

}


Hola como estas = str
matriz = 1 "Hola"
		 2 "como"
		 3 "estas"
		 4 NULL

"     Hola      como     estas   " = str
matriz = 1 "Hola"
		 2 "como"
		 3 "estas"
		 4 NULL

"             " = str
matriz = 1 NULL

*/
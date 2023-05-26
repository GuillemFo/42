/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/26 18:00:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_word(char const *s, char c, int i)
{
	while (s[i] != c && s[i - 1] || s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}



int	ft_counter(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**s2;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	s2 = malloc (ft_counter(s, c) * (sizeof(char *) + 1));
	if (!s2)
		return (NULL);
	while (s[i] != '\0')
	{
		if (ft_word(s, c, i) != 0)
		{
			//s2[k] = ft_substr(s, (i - (unsigned int)ft_word(s, c, i)),
			//		ft_word(s, c, i) + 1);
			printf("%s\n", ft_substr(s, (i - (unsigned int)ft_word(s, c, i)), ft_word(s, c, i) + 1));
			k++;
		}
		i++;
	}
	//s2[k] = NULL;
	return (s2);
}

int	main()
{
	ft_split("jjjjHolajjjjcomojjjestas", 'j');
}


/*
int	main()
{
	printf("%d\n", ft_counter("Hola omo    eee     a", ' '));
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
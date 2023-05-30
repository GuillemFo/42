/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/30 16:17:44 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int		w;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	s2 = malloc ((ft_counter(s, c) + 1) * (sizeof(char *)));
	if (!s2)
		return (NULL);
	if (s[0] == '\0')
	{
		s2[k] = ft_strdup("");
		k++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c)
		{
			w = 0;
			while (s[i] != c && s[i] != '\0')
			{
				w++;
				i++;
			}
			s2[k] = ft_substr(s, i - w, w);
			k++;
		}
	}
	s2[k] = NULL;
	return (s2);
}

int	main()
{
	int	i;
	char	**a;
	i = 0;
	a = ft_split("split  ||this|for|me|||||!|", '|');
	while(a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
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
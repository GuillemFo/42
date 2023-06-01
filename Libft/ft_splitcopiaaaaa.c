/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitcopiaaaaa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/02 00:18:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	ft_freemalloc(char **s2, int k)
{
	while (k >= 0)
	{
		free(s2[k]);
		k--;
	}
	free(s2);
}

int	ft_counter(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[0] == '\0')
		return (1);
	if (s[0] != c && s[0] != '\0')
		count++;
	i++;
	while (s[i] != '\0')
	{
		while (s[i - 1] == c && s[i] != c)
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
	int		k;
	char	**s2;
	int		i;
	int		w;

	i = 0;
	k = 0;			//falla el malloc if (s[0] == '\0'), se suma el +1 y da 16 en vez de 8
	s2 = malloc((ft_counter(s, c) + 1) * (sizeof(char *)));
	if (!s2 || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			w = 0;
			while (s[i] != c && s[i] != '\0')
			{
				w++;
				i++;
			}
			s2[k] = ft_substr(s, i - w, w);
			if (s2[k] == NULL)
			{
				ft_freemalloc(s2, k);
				return (NULL);
			}
			k++;
		}
	}
	s2[k] = NULL;
	return (s2);
}
/*
int	main(void)
{
	char *str = "xxxxxxxxhello!";
	ft_split(str, 'x');
}
*/
/*
int	main()
{
	int	i;
	char	**a;
	char	**b;
	char	**c;
	char	**d;

	i = 0;
	a = ft_split("split  ||this|for|me|||||!|", '|');
	b = ft_split("xxxxxxxxhello!", 'x');
	c = ft_split("  tripouille  42  ", ' ');
	d = ft_split("chinimala", ' ');
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	i = 0;
	while (b[i])
	{
		printf("%s\n", b[i]);
		i++;
	}
	i = 0;
	while (c[i])
	{
		printf("%s\n", c[i]);
		i++;
	}
	i = 0;
	while (d[i])
	{
		printf("%s\n", d[i]);
		i++;
	}
}
*/



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
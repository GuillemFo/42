/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:43:57 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/09 17:32:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
	{
		while (*((unsigned char *)s1 + n) == *((unsigned char *)s2 + n))
		{
			n--;
		}
	}

	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		i++;
	if (*(unsigned char *)s1 != *(unsigned char *)s2)
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	unsigned char	s1[] = "hola";
	unsigned char	s2[] = "holc";
	size_t			n = 4;	

	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:49:13 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/18 18:25:09 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	count;

	n = 0;
	count = 0;
	while (src[n] != '\0')
	{
		n++;
		count++;
	}
	if (size == 0)
		return (count);
	n = 0;
	while (src[n] != '\0' && n < size -1)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (count);
}
/*
int		main(void)
{
	char test[] = "buenas tardes";
	printf("%d-", ft_strlcpy(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "", 4));
	printf("%s\n", test);
	return (0);
}*/

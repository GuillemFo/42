/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:43:24 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/28 16:54:40 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_checksign(int n, int x)
{
	if (n < 0)
		x = 2;
	if (n >= 0)
		x = 1;
	return (x);
}

char	ft_intchar(int n)
{
	char	c;

	c = (n % 10) + 48;
	//printf("%d\n", n % 10);
	return (c);
}

int	ft_countdigits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		++i;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		x;
	char	*s;
	int		z;
	int		i;
	int		num;

	x = 0;
	num = n;
	x = ft_checksign(n, x);
	z = ft_countdigits(n);
	printf("%d\n", z);
	if (n < 0)
		num = n * -1;
	s = malloc ((z + x) * sizeof(char));
	if (!s)
		return (NULL);
	i = ft_countdigits(n);
	s[i] = '\0';
	while (z > 0)
	{
		s[i] = ft_intchar(num);
		num /= 10;
		z--;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}


int	main(void)
{
	printf("%s\n", ft_itoa(1111111123));
}

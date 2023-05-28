/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:43:24 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/28 19:19:32 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

long int	ft_checksign(long int nb, long int x)
{
	if (nb < 0)
		x = 1;
	if (nb >= 0)
		x = 1;
	return (x);
}

unsigned char	ft_intchar(long int nb)
{
	unsigned char	c;

	c = (nb % 10) + 48;
	return (c);
}

long int	ft_countdigits(long int nb)
{
	long int	i;

	i = 0;
	if (nb <= 0)
		++i;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int		nb;
	long int		x;
	char			*s;
	long int		z;

	nb = n;
	x = 0;
	x = ft_checksign(nb, x);
	z = ft_countdigits(nb);
	if (nb < 0)
		nb = nb * -1;
	s = malloc ((z + x) * sizeof(char));
	if (!s)
		return (NULL);
	s[z] = '\0';
	z--;
	while (z + 1 > 0)
	{
		s[z] = ft_intchar(nb);
		nb /= 10;
		z--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*

int	main(void)
{
	printf("%s\n", ft_itoa(-12321323));
}
*/
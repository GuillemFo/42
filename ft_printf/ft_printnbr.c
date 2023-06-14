/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:33:58 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 19:36:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putn(int s)
{
	int	i;

	i = 0;
	if (s < 0)
	{
		i += ft_char('-');
		s *= -1;
	}
	if (s >= 10)
	{
		i += ft_putn (s / 10);
		i += ft_putn (s % 10);
	}
	else
		i += ft_char(s + 48);
	return (i);
}

int	ft_u(unsigned int s)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	if (s >= 10)
	{
		test = ft_u (s / 10);
		if (test == -1)
			return (-1);
		i += test;
		test = ft_u (s % 10);
		if (test == -1)
			return (-1);
		i += test;
	}
	else
	{
		test = ft_char(s + 48);
		if (test == -1)
			return (-1);
		i += test;
	}
	return (i);
}

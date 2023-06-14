/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.cc                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:33:58 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 13:54:43 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putn(int s)
{
	int	i;

	i = 0;
	if (s == -2147483648)
	{
		if (ft_string("-2") != -1)
			i += 2;
		s = 147483648;
	}
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

	i = 0;
	if (s >= 10)
	{
		i += ft_u (s / 10);
		i += ft_u (s % 10);
	}
	else
		i += ft_char(s + 48);
	return (i);
}

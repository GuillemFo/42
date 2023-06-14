/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.cc                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:41:15 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 13:53:45 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hex(unsigned int s)
{
	static char	base[16] = "0123456789abcdef";
	int			i;

	i = 0;
	if (s >= 16)
	{
		i += ft_hex (s / 16);
		i += ft_hex (s % 16);
	}
	else
		i += ft_char(base[s]);
	return (i);
}

int	ft_hexcap(unsigned int s)
{
	static char	base[16] = "0123456789ABCDEF";
	int			i;

	i = 0;
	if (s >= 16)
	{
		i += ft_hexcap (s / 16);
		i += ft_hexcap (s % 16);
	}
	else
		i += ft_char(base[s]);
	return (i);
}

static int	ft_point(unsigned long s)
{
	static char	base[16] = "0123456789abcdef";
	int			i;

	i = 0;
	if (s >= 16)
	{
		i += ft_point (s / 16);
		i += ft_point (s % 16);
	}
	else
		i += ft_char(base[s]);
	return (i);
}

int	ft_ptr(unsigned long s)
{
	int	i;

	i = write (1, "0x", 2);
	i += ft_point(s);
	return (i);
}


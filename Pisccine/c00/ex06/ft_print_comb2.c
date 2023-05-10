/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:19:31 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/04 00:47:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_func(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((b <= 99) || (a <= 98))
	{
		b = a +1;
		while ((b <= 99) && (a <= 98))
		{
			write_func(a / 10 + '0');
			write_func(a % 10 + '0');
			write_func(' ');
			write_func(b / 10 + '0');
			write_func(b % 10 + '0');
			if ((a < 98) && (b <= 99))
			{	
				write_func(',');
				write_func(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int main (void)

{
	ft_print_comb2();
	return (0);
}*/

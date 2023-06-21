/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:32:20 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/08 19:20:48 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int div = 0, mod = 0;
	ft_div_mod(40, 15, &div, &mod);
	printf("%d,%d", div, mod);
	return 0;
}*/
/* fprint("%d %d\n", *div, *mod); deberia estar encima de }
int	main(int argc, char **argv)
{
	
	int	a;
	int b;
	int	div;
	int	mod;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_div_mod(a, b, &div, &mod);
	return (0);
}*/

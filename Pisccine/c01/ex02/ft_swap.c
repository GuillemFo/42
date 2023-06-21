/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:53:59 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/08 19:18:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)

{
	int	tmp1;
	int	tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp1;
}
/*
int main()
{
	int a = 15;
	int b = -25;
	ft_swap(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}*/
/*
int	main(int argc,char **argv)
{
	int a, b;
	argc = 3;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}*/

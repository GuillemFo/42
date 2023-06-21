/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:01:42 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/08 19:13:27 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main()
{
	int v = 15;
	ft_ft(&v);
	printf("%d", v);
	return 0;
}
*/
/*
int main(void)
{
	int	n;
	int *nbr;

	n = 41;
	nbr = &n;
	ft_ft(nbr);
	printf("deberia cambiar %d\n", n);
	return (0);
}*/

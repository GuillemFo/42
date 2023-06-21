/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:25:07 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/10 18:15:11 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	tab;
	int	tab2;

	i = 0;
	while (i < size)
	{
		tab2[i] = tab[i];
		i++;
	}
	while (i < size / 2)
	{
		tab[i] = tab2[size];
		i++;
		--size;
	}
}

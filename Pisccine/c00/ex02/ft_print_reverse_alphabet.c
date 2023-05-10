/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:54:23 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/04 00:42:40 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	puto;

	puto = 'z';
	while (puto >= 'a')
	{
		write(1, &puto, 1);
		puto--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	
	return(0);
}*/

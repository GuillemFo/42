/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:17:12 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/04 00:41:21 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	chango;

	chango = 'a';
	while (chango <= 'z')
	{
		write(1, &chango, 1);
		chango++;
	}
}
/*
int main(void)
	{
		ft_print_alphabet();
			return (0);
	}
*/

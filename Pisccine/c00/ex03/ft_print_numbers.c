/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:34:39 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/04 00:43:39 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	paco;

	paco = '0';
	while (paco <= '9')
	{
		write(1, &paco, 1);
		paco++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();

	return(0);
}*/
/* si molinette lo tira, reemplazar paco = 0 por paco =60 y while de paco al 071
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/10 16:12:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_argv_check()



int push_swap(long *argv)
{

}

void ft_error(int argc)
{
	ft_printf("ERROR\n");
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (ft_error);
	else
		ft_argv_check(*argv);
	return (0);
}

/*
#pasar char argv a long para comprobar que no sea mayor que int.(programar atol) luego filtrar a max int y min int dentro del atol y si supera, imprimir error.
*/
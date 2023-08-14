/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/14 16:52:12 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkarg(char *argv)
{
	int	z;
	int	i;

	z = 0;
	i = 1;
	if (argv[0] == '-' || argv[0] >= '0' && argv[0] <= '9')
	{
	/*	if (argv[1] != '\0' || argv[1] < '0' && argv[1] > '9')
			return (write(2, "ERROR\n", 6)); */
		while (argv[i] != '\0')
		{
			z = ft_isdigit(argv[i]);
			if (z == 0)
				return (write(2, "ERROR\n", 6));
			i++;
		}
	}
	else
		return (write(2, "ERROR\n", 6));
}

long	ft_atol() ascii to long.












int	main(int argc, char *argv[])
{
	argv = NULL;
	if (argc < 2)
		return (write(2, "ERROR\n", 6));

}

/*

#pasar char argv a long para comprobar que no sea mayor que int.(programar atol) luego filtrar a max int y min int dentro del atol y si supera, imprimir error.
----
char comparar si es 10num o mas y filtrar max int y min int y luego atoi para trabajar con los datos.

*/


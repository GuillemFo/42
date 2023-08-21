/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/21 12:53:31 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**split_result;
	int		x;
	int		z;

	if (argc < 2) 
		return (write(2, "ERROR\n", 6));
	else
	{
		if (argc == 2)
		{
			split_result = ft_split(argv[1], ' ');
			x = 0;
			while (split_result[x])
			{
				z = ft_check_arg_is_num(split_result[x]);
				if (z == 1)
					write(1, "all ok on arg is num = 2\n", 27);
				else
				{
					write(1, "error on arg is num = 2\n", 25);
					return (0);
				}
				x++;
			}
		}
		else
		{
			while (argc > 2)
			{
				z = ft_check_arg_is_num(argv[x]);
				if (z == 1)
				{
					write(1, "all ok on arg is num > 2\n", 27);
					argc--;
				}
				else
				{
					write(1, "error on arg is num > 2\n", 25);
					argc = 0;
				}
			}
		}
	}
}

/*#pasar char argv a long para comprobar que no sea mayor que int.
(programar atol) luego filtrar a max int y min int dentro del 
atol y si supera, imprimir error.
----
char comparar si es 10num o mas y filtrar max int y min int y luego 
atoi para trabajar con los datos.


APLICAR SPLIT ANTES DE NADA PARA PODER TRABAJAR CON VALORES 
EN " " Y SOLOS A DEMAS DE CONSEGUIR UN VALOR PARA PODER ITERAR
 EL WHILE

*/
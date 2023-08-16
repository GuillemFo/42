/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/16 17:26:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_arg_is_num(char *argv)
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
	return (1);
}

/* NEED TESTER TO CHECK WITH LONG IF ITS OVER OR UNDER MAX AND MIN INTS AND BE ABLE TO RETURN A CODE TO SEE IF ITS WRONG*/
/* THEN APPLY ATOI TO WORK WITH THE VALUES WITH THE PUSH_SWAP*/



int	main(int argc, char *argv[])
{
	char **split_result;
	if (argc < 2) 
		return (write(2, "ERROR\n", 6));
	else
		if (argc == 2)
		{
			*split_result = ft_split(argv[1]);
/*IMPLEMENT SPLIT HERE AND WORK WITH THE RESULTANT VALUES / MATRIX OF SPLIT & COUNT ALL VALUES RESULTED TO KNOW HOW MANY TIMES ITER THE WHILE LOOP FOR FT_CHECKARG*/
		while ( /*calcular el numero de splits para saber cuanto iterar*/)
		{
			z = ft_check_arg_is_num(argv[x]);
			if (z == 1)
			{
				write(1, "all ok\n", 7);
				/*añadir iterador para avanzar en el array*/
			}
			else
			{
				write(1, "error\n", 6);
				/*frorzar salida p*/
			}
		}

		else
		{
			while (argc > 2)
			{
				z = ft_check_arg_is_num(argv[x]);
				if (z == 1)
				{
					write(1, "all ok\n", 7);
					argc--;
				}
				else
				{
					write(1, "error\n", 6);
					argc = 0;
				}
			}
		}
}


/*

#pasar char argv a long para comprobar que no sea mayor que int.(programar atol) luego filtrar a max int y min int dentro del atol y si supera, imprimir error.
----
char comparar si es 10num o mas y filtrar max int y min int y luego atoi para trabajar con los datos.


APLICAR SPLIT ANTES DE NADA PARA PODER TRABAJAR CON VALORES EN " " Y SOLOS A DEMAS DE CONSEGUIR UN VALOR PARA PODER ITERAR EL WHILE

*/


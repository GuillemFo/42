/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/21 13:31:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2) 
		return (write(2, "ERROR\n", 6));
	else
	{
		test(argc, argv);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/13 17:50:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == %)
		{
			
		}
		ft_putcharp(s, args);

	}

}



///////////////////

%d, %i - numeros
%x %X  - hexadecimal
%c - caracter
%s - stringg
%p - puntero
%u unsigned int
%% %t %e %l

printf("numero: %d, nombre: %s", edad, nombre)


if (d o i)
else if(x o X)
else if (s)
else if (c)
else (write caracter de despues de %)
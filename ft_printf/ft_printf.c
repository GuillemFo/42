/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 13:53:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	int		test;
	va_list	argv;

	test = 0;
	i = 0;
	count = 0;
	va_start(argv, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i +1] == '%')
				test += ft_char ('%');
			else if (str[i +1] == 'i' || str[i +1] == 'd')
				test += ft_putn (va_arg (argv, int));
			else if (str[i +1] == 'c')
				test += ft_char (va_arg (argv, int));
			else if (str[i +1] == 's')
				test += ft_string (va_arg (argv, char *));
			else if (str[i +1] == 'u')
				test += ft_u (va_arg (argv, unsigned int));
			else if (str[i +1] == 'x')
				test += ft_hex(va_arg (argv, unsigned int));
			else if (str[i +1] == 'X')
				test += ft_hexcap(va_arg (argv, unsigned int));
			else if (str[i +1] == 'p')
				
			i++;
		}
		else
			test += ft_char (str[i]);
		i++;
	}	
	va_end(argv);
	return (test);
}
#include <stdio.h>

int	main(void)
{
	int i = 0;

	printf("%p", &i);
	printf("\n");
	ft_printf("%p", &i);
}

/*
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
*/
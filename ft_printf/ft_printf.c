/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/13 20:19:56 by gforns-s         ###   ########.fr       */
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
	i = -1;	//					porque ha de ser -1????
	count = 0;
	va_start(argv, str);
	while (str[++i] != '\0') // porque ha de arrancar en ++i??
	{
		if (str[i] == '%')
		{
			if (str[i +1] == '%')
				test += ft_c('%');
			// (str[i +1] == i || d)
			else if (str[i +1] == 'c')
				test += ft_c (va_arg (argv, int));
			else if (str[i +1] == 's')
				test += ft_string (va_arg (argv, char *));
			//else (s[i +1] == u)
			//else (s[i +1] == p)
			//else (s[i +1] == x)
			//else (s[i +1] == X)
			i++;
		}
		else
			test += ft_c(str[i]);
	}
	va_end(argv);
	return (test);
}
#include <stdio.h>

int	main(void)
{
	printf("%c", 'h');
	printf("%s\n", "");
	ft_printf("%%", '%');

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
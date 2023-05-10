/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:36:02 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/13 21:35:14 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < '0' || str[n] > '9')
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "123423";
	
	ft_str_is_numeric(str);
	printf("%d\n", ft_str_is_numeric(str));

}
*/
/*
me pide  que imprima 1 si es todo alphabetico
y 0 si hay espacio o '\0'
y hay que usar asci o 'a' y 'z' 'A' y 'Z'
*/

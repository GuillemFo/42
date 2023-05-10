/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:19:47 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/13 21:34:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if ((str[n] < 'a' || str[n] > 'z') && (str[n] < 'A' || str[n] > 'Z'))
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "Bon Dia";
	
	ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(str));

}
*/
/*
me pide  que imprima 1 si es todo alphabetico
y 0 si hay espacio o '\0'
y hay que usar asci o 'a' y 'z' 'A' y 'Z'
*/

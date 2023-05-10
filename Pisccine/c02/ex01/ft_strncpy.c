/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:39:42 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/17 14:07:01 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*
 n es el numero maximo de caracteres a copiar
 la idea es que copie unicamente hasta x caracter
int	main(void)
{
	unsigned int n = 20;
	char dest[] = "/fvskn";
	char src[] = "hola mundo";

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:49:18 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/13 21:36:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < 'A' || str[n] > 'Z')
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "HOLA";
	
	ft_str_is_uppercase(str);
	printf("%d\n", ft_str_is_uppercase(str));

}*/

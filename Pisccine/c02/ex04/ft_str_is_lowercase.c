/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:45:03 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/13 21:35:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < 'a' || str[n] > 'z')
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "bon dia";
	
	ft_str_is_lowercase(str);
	printf("%d\n", ft_str_is_lowercase(str));

}
*/

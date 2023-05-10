/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:16:14 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/13 23:53:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "HOla BuenOs"; 	
	ft_strupcase(str);
	printf("%s\n", ft_strupcase(str));

}*/

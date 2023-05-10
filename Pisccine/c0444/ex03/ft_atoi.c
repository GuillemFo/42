/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:23:39 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/20 17:31:54 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] > 'a' && str[i] <= 'z'))
			return (result);
		if (str[i] == '-')
			sign++;
		i++;
	}	
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		return (result * -1);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	*str; 
	char	*str2;

	str = ",-,125899a9999";
	str2 = "-1258999999";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/

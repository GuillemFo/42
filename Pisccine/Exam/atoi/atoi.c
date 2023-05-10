/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:10:07 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/21 08:28:39 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int	ft_atoi(char *str)
{
	int	result;
	int sign;
	int i;
	
	result = 0;
	sign  = 1;
	i = 0;;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result *10 + str[i] - '0';
		i++;
	}
	return (sign * result);
	
}
/*
int	main(int argc, char *argv[])
{

	if (argc != 2)
		write(1, "Error\n", 6);
	else
		printf("%d\n", ft_atoi(argv[1]));
}*/
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	*str, *str2;

	str = "+-2300fesfss65+2";
	str2 = "2300";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}


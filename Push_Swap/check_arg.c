/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:47:48 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/21 12:55:22 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_arg_is_num(char *argv)
{
	int	z;
	int	i;

	z = 0;
	i = 1;
	if (argv[0] == '-' || argv[0] >= '0' && argv[0] <= '9')
	{
		while (argv[i] != '\0')
		{
			z = ft_isdigit(argv[i]);
			if (z == 0)
				return (write(2, "ERROR FT_ISDIGIT REURNED FALSE\n", 32));
			i++;
		}
	}
	else
		return (write(2, "ERROR\n", 6));
	return (1);
}

long	ft_check_max_min(char *argv)
{
	long	result;
	long	sign;
	int		i;

	result = 0;
	i = 0;
	sign = 1;
	if (argv[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (argv[i])
	{
		result = result * 10 + argv[i] - '0';
		i++;
	}
	result = sign * result;
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	return (1);
}


if (argc == 2)
		{
			split_result = ft_split(argv[1], ' ');
			x = 0;
			while (split_result[x])
			{
				z = ft_check_arg_is_num(split_result[x]);
				if (z == 1)
					write(1, "all ok on arg is num = 2\n", 27);
				else
				{
					write(1, "error on arg is num = 2\n", 25);
					return (0);
				}
				x++;
			}
		}
		else
		{
			while (argc > 2)
			{
				z = ft_check_arg_is_num(argv[x]);
				if (z == 1)
				{
					write(1, "all ok on arg is num > 2\n", 27);
					argc--;
				}
				else
				{
					write(1, "error on arg is num > 2\n", 25);
					argc = 0;
				}
			}
		}

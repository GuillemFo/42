/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:58:49 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/23 16:38:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_str_capitalizer(char *str)
{
	int		i;
	int		j;
	char	tmp[strlen(str) +1];

	i = 0;
	j = 1;
	if (tmp[0] >= 97 && tmp[0] <= 122)
		tmp[0] = str[0] -32;
	else

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && str[j - 1] == ' ')
		{
			tmp[i] = str[j] -32; // cahnge tmp for str so equals str[i] = str[i] -32;
			i++;
			j++;
		}
		else
		{
			tmp[i] = str[j];
			i++;
			j++;
		}
	}
	return (tmp);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_str_capitalizer(argv[i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

// THIS WILL NEVER WORK BECAUSE I COULDNT USE MALLOC AND TO START A VARIABLE * U NEED MALLOC,
// THATS WHY WE MODIFY THE ACTUAL STRING INSTEAD OF CREATING A NEW ONE.

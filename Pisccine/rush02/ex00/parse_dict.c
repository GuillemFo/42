/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istorric <istorric@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:05:08 by istorric          #+#    #+#             */
/*   Updated: 2023/04/16 20:20:22 by istorric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	num_of_row(char *dfile)
{
	int	i;
	int	row;

	i = 0;
	row = 0 ;
	while (dfile[i] != '\0')
	{
		if (dfile[i] == '\n')
			row++;
		i++;
	}
	return (row + 1);
}

int	ft_strlen_n(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != ':')
	{
		i++;
	}
	return (i);
}

l_dict	*parsedata(char *dfile, int row)
{
	l_dict	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(500);
	while (dfile[i] != '\0')
	{
		while (dfile[i] != '\n')
		{
			if (row)
				i++;
		}
		i++;
		j++;
	}
	return (tab);
}
/*	char	*num;
	char	*string;

	tab[j].n = ft_atoi(num);
	
				s = ft_strlen_n(dfile);
		
			
			if ((dfile[i] <= '9' && dfile[i] >= '0') 
					&& dfile[i + 1] == ':' && dfile[i + 2] == ' ')
			{
				num[j] =  dfile[i];
			   i = i + 2;
		   		string[j] = d	   
			}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:26:20 by psastre           #+#    #+#             */
/*   Updated: 2023/04/16 20:15:08 by istorric         ###   ########.fr       */
/*   Updated: 2023/04/16 13:43:10 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"header.h"

int	ft_put_error(int i)
{
	if (i == -1)
		write(1, "Dict Error\n", 12);
	else if (i == 0)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	return (1);
}

char	*savedata(int file, int leng)
{
	char	*str;

	str = NULL;
	str = (char *)malloc((leng) * sizeof(char *));
	if (str)
	{
		file = read(file, str, leng);
		if (file <= 0)
			return (NULL);
	}
	else
		return (NULL);
	return (str);
}

int	checklenfile(int file)
{
	int		len;
	char	ibuf;

	len = 0;
	while (read(file, &ibuf, 1))
		len++;
	return (len);
}

int	check_arg(int a, char **str, char *sdata)
{
	int	file;
	int	n;
	int	lenfile;

	n = 0;
	file = 0;
	if (a == 2)
	{
		file = open("numbers.dict", O_RDONLY);
		if (file == -1)
			ft_put_error(file);
			lenfile = checklenfile(file);
			sdata = savedata(file, lenfile);
	}
	else if (a == 3)
	{
		file = open(str[1], O_RDONLY);
		if (file == -1)
			ft_put_error(file);
		lenfile = checklenfile(file);
	}
	else if (a == 1)
		ft_put_error(0);
	return (file);
}

int	main(int argc, char *argv[])
{	
	l_dict	*list_d;
	char	*datafile;
	int		file;
	int		numrow;

	numrow = 0;
	datafile = malloc(400 * (sizeof(char *)));
	file = check_arg(argc, argv, datafile);
	numrow = num_of_row(datafile);
	list_d = (l_dict *)malloc(numrow * (sizeof(l_dict)));
	list_d = parsedata(datafile, numrow);
	if (close(file) <= 0)
		ft_put_error(file);
	return (0);
}

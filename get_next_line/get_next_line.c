/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:33:49 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/16 18:16:16 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


char	*get_next_line(int fd)
{
	char			buff[BUFFER_SIZE];
	int				i;
	int				j;
	static char		tmp[BUFFER_SIZE];
	char			newstr[BUFFER_SIZE];

	i = 0;
	j = 0;
	read(fd, buff, BUFFER_SIZE);
	while (i < BUFFER_SIZE)
	{
		while (buff[i] != '\n')
		{
			newstr[i] = buff[i];
			i++;
		}
		i++;
		newstr[i] = buff[i];
		i++;
		while (buff[i] != '\0')
		{
			tmp[j] = buff[i];
			i++;
			j++;
		}
		tmp[j] = buff[i];
	}
	close (fd);
	return (newstr);
}


int	main(void)
{
	int		m;
	int		fd;
	char	*path;

	m = 0;
	path = "/Users/gforns-s/Desktop/GITHUB/get_next_line/test.txt";
	fd = open(path, O_RDONLY);
	while (m < 10)
	{
		printf("%s", get_next_line(fd));
		m++;
	}
}

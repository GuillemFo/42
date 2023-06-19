/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:33:49 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/19 09:42:09 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

size_t	ft_strlen(const char *var)
{
	size_t	count;

	count = 0;
	while (var[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(const char *s1)
{
	size_t	s1l;
	char	*str;
	int		i;

	i = 0;
	s1l = ft_strlen(s1);
	str = malloc (s1l + 1 * sizeof(char));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


char	*get_next_line(int fd)
{
	static char		tmp[BUFFER_SIZE];
	static int		i = 0;
	int				j;
	char			buff[BUFFER_SIZE];
	char			*newstr;

	j = 0;
	read(fd, tmp, BUFFER_SIZE);
	while (tmp[i] != '\n' && tmp[i] != '\0' && i < BUFFER_SIZE)
	{
		buff[j] = tmp[i];
		i++;
		j++;
	}
	buff[j] = tmp[i];
	buff[j +1] = '\0';
	newstr = ft_strdup(buff);
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
	while (m < 20)
	{
		printf("%s", get_next_line(fd));
		m++;
	}
}

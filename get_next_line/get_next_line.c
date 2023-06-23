/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:33:49 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/23 16:36:51 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


// check if ther is something, copy til u find /n and read bytes have something. concatenate with strjoin so you are able to carry on if less data is loaded in the buffer size mening size 3 but \n is at 5 character of string. clear buffer, then save from \n to extra grabbed data so next time u grab u get the missing data not printed before.
// STOP CHECKING '\0' FILES MIGHT NOT FINISH WITH IT, SET A READ VALUE LIKE rdbytes AND CHECK WHAT RETURNS.
// CHECK WITH IF ALL VARIABLES< IMPUT DATA AND LINES THAT ARE GIVEN, CREATED AND RETURNED.
// WORK 🙃
char	*ft_left_tmp(char *tmp, char *newline)
{
	char	*newtmp;
	int		i;
	int		j;

	if (ft_strlen(tmp) - ft_strlen(newline) == 0)
	{	
		free (tmp);
		return (NULL);
	}
	newtmp = malloc ((ft_strlen(tmp) - ft_strlen(newline) +1) * sizeof(char));
	if (!newtmp)
	{
		free (tmp);
		return (0);
	}
	i = ft_strlen(newline);
	j = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
	{
		newtmp[j] = tmp[i];
		i++;
		j++;
	}
	newtmp[j] = '\0';
	free (tmp);
	return (newtmp);
}

char	*ft_create_line(char *tmp)
{
	char	*newstr;
	int		i;

	if (!tmp)
		return (NULL);
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	newstr = malloc (i + 1 * sizeof(char));
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
	{
		newstr[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
	{
		newstr[i] = '\n';
		newstr[i + 1] = '\0';
	}
	else
		newstr[i] = '\0';
	return (newstr);
}

static char	*ft_readline(char *tmp, int fd)
{	
	int		rdbytes;
	char	buff[BUFFER_SIZE + 1];

	rdbytes = 1;
	while (rdbytes > 0 && ft_strchr(tmp, '\n') == 0)
	{
		rdbytes = read (fd, buff, BUFFER_SIZE);
		if (rdbytes == -1)
		{
			free(tmp);
			return (0);
		}
		else if (rdbytes > 0)
		{	
			buff[rdbytes] = '\0';
			tmp = ft_strjoin(tmp, buff);
			if (!tmp)
				return (0);
		}
	}
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char		*tmp;
	char			*newstr;

	tmp = ft_readline(tmp, fd);
	if (!tmp)
		return (0);
	newstr = ft_create_line(tmp);
	if (!newstr)
	{
		free (tmp);
		return (0);
	}
	tmp = ft_left_tmp(tmp, newstr); ///// error aqui
	return (newstr);
}
/*
int	main(void)
{
	int		m;
	int		fd;
	char	*path;

	m = 0;
	path = "test.txt";
	fd = open(path, O_RDONLY);
	char *linea = get_next_line(fd);
	while (linea)
	{
		printf("%s", linea);
		free(linea);
		linea = get_next_line(fd);
	}
}
*/
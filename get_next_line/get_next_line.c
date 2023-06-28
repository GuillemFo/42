
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>



char	*ft_left_tmp(char *tmp, char *line)
{
	char	*newtmp;
	int		i;
	int		j;

	if (ft_strlen(tmp) - ft_strlen(line) == 0)
	{
		free (tmp);
		return (NULL);
	}
	newtmp = malloc (((ft_strlen(tmp) - ft_strlen(line)) + 1) * sizeof(char));
	if (!newtmp)
	{
		//free (tmp);
		return (0);
	}
	i = ft_strlen(line);
	j = 0;
	while (tmp[i] != '\0')
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
	char	*line;
	int		i;

	// if (!tmp)
	// 	return (NULL); not necessary
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	if (tmp[i] == '\n')
		line = malloc ((i + 2) * sizeof(char));
	else
		line = malloc ((i + 1) * sizeof(char));
	if (!line)
		return (0);
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
	{
		line[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}


static char	*ft_readline(char *tmp, int fd)
{
	int		rdbytes;
	char	*buff;

	rdbytes = 1;
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
	{
		// if (tmp)
		// 	free(tmp); not necessary
		return (0);
	}
	while (rdbytes > 0 && ft_strchr(tmp, '\n') == 0)
	{
		rdbytes = read (fd, buff, BUFFER_SIZE);
		if (rdbytes == -1)
		{
			free (tmp);
			free (buff);
			return (0);
		}
		else if (rdbytes > 0)
		{
			buff[rdbytes] = '\0';
			tmp = ft_strjoin(tmp, buff);
		}
	}
	free (buff);
	return (tmp);
}


char	*get_next_line(int fd)
{
	static char	*tmp;
	char		*line;

	tmp = ft_readline(tmp, fd);
	if (!tmp)
		return (0);
	line = ft_create_line(tmp);
	if (!line)
	{
		free (tmp);
		return (0);
	}
	tmp = ft_left_tmp(tmp, line);
	// if (!tmp)
	return (line);
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
		printf("-%s-", linea);
		free(linea);
		linea = get_next_line(fd);
	}
}*/
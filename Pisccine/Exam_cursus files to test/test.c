#include <unistd.h>
#include <string.h>

char	*ft_str_capitalizer(char *str)
{
	int		i;
	int		j;
	char	tmp[strlen(str) +1];

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == ' ')
		{
			tmp[i] = str[j] -32;
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

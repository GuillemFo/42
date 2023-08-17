
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

int	main(int argc, char *argv[])
{
	int	z;
	int	i;

	i = 1;
	if (argc < 1)
		return (write(1, "ERRORP\n", 7));
	else
	{
		while (argv[i])
		{
			z = ft_check_max_min(argv[i]);
			if (z == 1)
				write(1, "OK\n", 3);
			else if (z == 0)
				return (write(1, "ERRORcheck\n", 11));
			i++;
		}
	}
	return (z);
}

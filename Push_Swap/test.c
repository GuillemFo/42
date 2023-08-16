#include <unistd.h>
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

int	ft_isdigit(int val)
{
	if (val >= '0' && val <= '9')
		return (1);
	else
		return (0);
}

int	ft_checkarg(char *argv)
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
				return (write(2, "ERROR\n", 6));
			i++;
		}
	}
	else
		return (write(2, "ERROR\n", 6));
	return (1);
}

int	main(int argc, char *argv[])
{

	if (argc < 2)
		return (write(2, "ERROR\n", 6));
	else

		/*IMPLEMENT SPLIT HERE AND WORK WITH THE RESULTANT VALUES / MATRIX OF SPLIT & COUNT ALL VALUES RESULTED TO KNOW HOW MANY TIMES ITER THE WHILE LOOP FOR FT_CHECKARG*/
		while ()
		{
			z = ft_checkarg(argv[x]);
			if (z == 1)
			{
				write(1, "all ok\n", 7);

			}
			else
			{
				write(1, "error\n", 6);

			}
		}
}

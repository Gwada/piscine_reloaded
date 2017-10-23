#include <unistd.h>

void	ft_putchar(char c);

void	ft_putndl(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (*s1 - *s2);
}

void	ft_sort(int size, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = -1;
	while (++i < size - 1)
	{
		j = i;
		while (++j < size)
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	ft_sort(argc, argv);
	while (++i < argc)
		ft_putndl(argv[i]);
	return (0);
}

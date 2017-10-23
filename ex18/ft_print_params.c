#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int     i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i += 1;
	}
	ft_putchar('\n');
}
void	ft_print_params(int par, char **params)
{
	int i;

	i = 0;
	while (++i < par)
		ft_putstr(params[i]);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argc, argv);
	return(0);
}

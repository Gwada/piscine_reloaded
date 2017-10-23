#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char		car;

	car = 'a';
	while (car <= 'z')
		ft_putchar(car++);
}

#include "../includes/display_file.h"

void	ft_error(int argc)
{
	if (argc < 2)
		write(2, "File name missing.", 18);
	else
		write(2, "Too many arguments.", 19);
}

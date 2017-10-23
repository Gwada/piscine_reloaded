int		ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;

	if (nb < 0 || nb > 12)
		return (0);
	i = 0;
	factorial = 1;
	while (++i <= nb)
		factorial *= i;
	return (factorial);
}

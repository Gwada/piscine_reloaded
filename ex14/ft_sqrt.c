int		ft_sqrt(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1)
		return (1);
	while (i * i < nbr)
		i++;
	if (i * i == nbr)
		return(i);
	return (0);
}

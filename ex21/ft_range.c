#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = -1;
	if (max < min)
		return (NULL);
	if(!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (++i < (max - min))
		tab[i] = min + i;
	return (tab);
}

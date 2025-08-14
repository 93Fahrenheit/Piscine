#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int size = max - min;
	int i = 0;

	if (min >= max)
		return (-1);
	
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (-1);
	
	while (i < size)
	{
		tab[i] = min + 1;
		i++;
	}
	*range = tab;
	return (size);
}

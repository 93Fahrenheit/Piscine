#include <stdlib.h>
#include <stdio.h>

int 	*ft_range(int min, int max)
{
	int *tab;
	int size = max - min;
	int i = 0;

	if (min >= max)
		return (NULL);

	tab = malloc(sizeof(int) * (size));
	if (!tab)
		return (NULL);

	while (i <= size)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	return (tab);
}

int	main()
{
	int min = 14;
	int max = 20;
	int i = 0;
	int *tab;

	tab = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}


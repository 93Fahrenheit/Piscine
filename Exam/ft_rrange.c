#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int size = 0;
	int *tab;
	int i = 0;

	if (end >= start)
		size = (end - start) + 1;
	else if (end < start)
		size = (start - end) + 1;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		if (end >= start)
			tab[i] = end - i;
		else if (end < start)
			tab[i] = end + i;
		i++;
	}
	return (tab);
}

int main()
{
	int size = 0;
	int i = 0;
	int start = -1;
	int end = 2;
	if (end >= start)
		size = (end - start) + 1;
	else if (end < start)
		size = (start - end) + 1;
	int *tab = ft_rrange(start, end);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min ++;
		i++;
	}
	return (size);
}

int	main()
{
	int	*ptr;
	int	i = 0;
	int	size = ft_ultimate_range(&ptr, 5, 12);
	
	printf("size = %d\n\n", size);
	printf("values: \n");
	while (i < size)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
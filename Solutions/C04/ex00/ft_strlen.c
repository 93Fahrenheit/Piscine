#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main()
{
	char *s = "Hello";
	printf("La chaine contient %d caractères", (ft_strlen(s)));
	return (0);
}

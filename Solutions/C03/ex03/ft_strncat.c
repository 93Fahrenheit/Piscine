#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	unsigned int n = 3;
	char src[] = "world";
	char dest1[15] = "Hello";
	char dest2[15] = "Hello";

	printf("ft_strncat = %s\n", ft_strncat(dest1, src, n));
	printf("strncat = %s\n", strncat(dest2, src, n));
	return (0);
}

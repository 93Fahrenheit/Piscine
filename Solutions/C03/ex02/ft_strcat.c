#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
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
	char s2a[12] = "Hello";
	char s2b[12] = "Hello";
	char s1[] = " world";

	printf("ft_strcat = %s\n", ft_strcat(s2a, s1));
	printf("strcat = %s\n", strcat(s2b, s1));
	return (0);
}

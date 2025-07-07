#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i ;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char s1[] = "Hello";
	char s2[] = "Farah";
	char s3[10] = "Pepito";
	char s4[] = "Salagadou";

	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	printf("%s\n", ft_strcpy(s3, s4));
	printf("%s\n", strcpy(s3, s4));

	return (0);
}

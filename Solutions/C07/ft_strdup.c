#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;

	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
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
	char str[] = "Youhouyou bidouwa miaou miaou";
	printf("%s\n", ft_strdup(str));
	return 0;
}

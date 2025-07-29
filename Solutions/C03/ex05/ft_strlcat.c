#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len = ft_strlen(dest);
	unsigned int src_len = ft_strlen(src);
	unsigned int	i = 0;
	unsigned int	j = 0;

	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

int main(void)
{
	char dest1[20] = "Hello";
	char dest2[20] = "Hello";
	char *src = " world!";

	unsigned int size = 3;

	unsigned int r1 = strlcat(dest1, src, size);

	unsigned int r2 = ft_strlcat(dest2, src, size);

	printf("strlcat     → dest = \"%s\", return = %u\n", dest1, r1);
	printf("ft_strlcat  → dest = \"%s\", return = %u\n", dest2, r2);

	return (0);
}

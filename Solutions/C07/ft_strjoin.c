#include <stdlib.h>
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

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	seps_len;
	int	strs_len;

	i = 0;
	strs_len = 0;
	seps_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}	
	return (strs_len + seps_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat_all(char **strs, char *sep, char *dest, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size -1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int	total_len;

	if (size <= 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	total_len = get_total_len(size, strs, sep) + 1;
	dest = malloc(sizeof(char) * total_len);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strcat_all(strs, sep, dest, size);
	return (dest);
}

int main()
{
	char *strs[] = {"Hello", "42", "Paris", "I", "am", "tired"};
	char *strs2[] = {"test", "", "with", "", "empty", "", "strs"};
	printf("test 1 : %s\n", ft_strjoin(0, strs, ", "));
	printf("test 2 : %s\n", ft_strjoin(6, strs, ", "));
	printf("test 3 : %s\n", ft_strjoin(3, strs, ", "));
	printf("test 4 : %s\n", ft_strjoin(-3, strs, ", "));
	printf("test 5 : %s\n", ft_strjoin(6, strs2, ", "));
	printf("test 6 : %s\n", ft_strjoin(8, strs2, ", "));
	return (0);
}

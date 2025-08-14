#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_size(int size, char **strs, char *sep)
{
	int	nb_char;
	int	i;

	nb_char = 0;
	i = 0;
	while (i < size)
	{
		nb_char += ft_strlen(strs[i]);
		i++;
	}
	return (nb_char + (ft_strlen(sep) * (size - 1)));
}

char *ft_strcat_strs(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			k++;
			j++;
		}
		while (sep[l] && i < size - 1)
		{
			dest[k] = sep[l];
			k++;
			l++;
		}
		l = 0;
		j = 0;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char 	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int	dest_size;

	if (size == 0)
	{
    		dest = malloc(1);
    		if (!dest)
        		return (NULL);
    		dest[0] = '\0';
    		return (dest);
	}
	dest_size = ft_get_size(size, strs, sep) + 1;
	dest = malloc(sizeof(char) * dest_size);
	if (!dest)
		return(NULL);
	dest = ft_strcat_strs(size, strs, sep, dest);

	return (dest);
}

int	main()
{
	char *test[] = {"Hello", "bien", "oui"};
	char *sep = ", ";
	
	char *result = ft_strjoin(3, test, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}

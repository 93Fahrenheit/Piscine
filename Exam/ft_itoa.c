#include <stdlib.h>
#include <stdio.h>

int	total_str_len(int nbr)
{
	long	len = 0;
	long	tmp;
	tmp = (long)nbr;

	if (tmp == 0)
		return (1);
	if (tmp < 0)
	{
		tmp = -tmp;
		len++;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int	dest_len = total_str_len(nbr);
	char	*dest;
	long	tmp = (long)nbr;

	dest = malloc(dest_len + 1);
	if (!dest)
		return (NULL);
	dest[dest_len] = '\0';
	if (tmp == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (tmp < 0)
	{
		dest[0] = '-';
		tmp = -tmp;
	}
	while (tmp > 0)
	{
		dest_len--;
		dest[dest_len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (dest);
}

int	main()
{
	printf("%s", ft_itoa(-123456789));
}

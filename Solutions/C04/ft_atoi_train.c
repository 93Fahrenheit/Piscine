#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	int	sign = 1;

	while (str[i] >= 0 && str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main()
{
	char *str = "---+--+1234ab567";
	printf("%d", ft_atoi(str));
}

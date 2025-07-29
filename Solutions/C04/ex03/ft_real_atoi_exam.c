#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	num = 0;

	// Ignorer les espaces blancs
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// Gérer un seul signe éventuel
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1; // Ici, il ne faut pas faire -sign ! On fixe juste le signe une fois.
		i++;
	}

	// Lire les chiffres tant qu’ils sont valides
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	main()
{
	char *s1 = "   ---+--+1234ab567";
	char *s2 = "   -42";
	char *s3 = "   +0042";
	char *s4 = "  +-42";
	char *s5 = "abcd123";

	printf("ft_atoi(s1) = %d\n", ft_atoi(s1));
	printf("   atoi(s1) = %d\n\n", atoi(s1));

	printf("ft_atoi(s2) = %d\n", ft_atoi(s2));
	printf("   atoi(s2) = %d\n\n", atoi(s2));

	printf("ft_atoi(s3) = %d\n", ft_atoi(s3));
	printf("   atoi(s3) = %d\n\n", atoi(s3));

	printf("ft_atoi(s4) = %d\n", ft_atoi(s4));
	printf("   atoi(s4) = %d\n\n", atoi(s4));

	printf("ft_atoi(s5) = %d\n", ft_atoi(s5));
	printf("   atoi(s5) = %d\n", atoi(s5));

	return (0);
}

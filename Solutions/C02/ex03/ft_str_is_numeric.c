#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char s1[] = "1234";
	char s2[] = "42Stud";
	char s3[] = "2025!";
	char s4[] = "4 Aout";
	char s5[] = "";

	printf("Resultat attentu : 1 0 0 0 1\n");
	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d\n", ft_str_is_numeric(s2));
	printf("%d\n", ft_str_is_numeric(s3));
	printf("%d\n", ft_str_is_numeric(s4));
	printf("%d\n", ft_str_is_numeric(s5));
	return (0);
}

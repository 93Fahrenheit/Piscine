#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char s1[] = "PEPITO";
	char s2[] = "42stud";
	char s3[] = "Hello";
	char s4[] = "hey";
	char s5[] = "";

	printf("Resultat attentu : 1 0 0 0 1\n");
	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d\n", ft_str_is_uppercase(s2));
	printf("%d\n", ft_str_is_uppercase(s3));
	printf("%d\n", ft_str_is_uppercase(s4));
	printf("%d\n", ft_str_is_uppercase(s5));

	return (0);
}

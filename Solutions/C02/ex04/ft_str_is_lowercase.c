#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char s1[] = "badaboum";
	char s2[] = "42Stud";
	char s3[] = "Hello";
	char s4[] = "HEY";
	char s5[] = "";

	printf("Resultat attentu : 1 0 0 0 1\n");
	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
	printf("%d\n", ft_str_is_lowercase(s4));
	printf("%d\n", ft_str_is_lowercase(s5));
	return (0);
}

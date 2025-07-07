#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char s1[] = "Hello";
	char s2[] = "1234";
	char s3[] = "bonjour!";
	char s4[] = " hi75";
	char s5[] = "";

	printf("Sortie attendue : 1 0 0 0 1\n");
	printf("%d\n", (ft_str_is_alpha(s1)));
	printf("%d\n", (ft_str_is_alpha(s2)));
	printf("%d\n", (ft_str_is_alpha(s3)));
	printf("%d\n", (ft_str_is_alpha(s4)));
	printf("%d\n", (ft_str_is_alpha(s5)));
	return (0);
}

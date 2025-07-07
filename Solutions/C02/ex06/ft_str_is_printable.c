#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char s1[] = "Hello";
	char s2[] = "Ligne\nSuivante";  
	char s3[] = "\x1B[31m";         
	char s4[] = "";

	printf("Résultat attendu : 1 0 0 1\n");
	printf("%d\n", ft_str_is_printable(s1)); 
	printf("%d\n", ft_str_is_printable(s2)); 
	printf("%d\n", ft_str_is_printable(s3)); 
	printf("%d\n", ft_str_is_printable(s4)); 
	return 0;
}


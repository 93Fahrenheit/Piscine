#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char s1[] = "HELLO";
	char s2[] = "Hey You123";
	char s3[] = "42!";
	char s4[] = "";
	char s5[] = "StUdeNt";

	printf("Avant : HELLO       → Après : %s\n", ft_strupcase(s1));
	printf("Avant : Hey You123  → Après : %s\n", ft_strupcase(s2));
	printf("Avant : 42!         → Après : %s\n", ft_strupcase(s3));
	printf("Avant : (vide)      → Après : %s\n", ft_strupcase(s4));
	printf("Avant : StUdeNt     → Après : %s\n", ft_strupcase(s5));

	return (0);
}

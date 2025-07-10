#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *s1 = "abc";
	char *s2 = "abc";

	char *s3 = "abc";
	char *s4 = "abd";

	char *s5 = "abc";
	char *s6 = "ab";

	char *s7 = "";
	char *s8 = "abc";

	printf("Comparaison 1 : \"%s\" vs \"%s\"\n", s1, s2);
	printf("ft_strcmp = %d | strcmp = %d\n\n", ft_strcmp(s1, s2), strcmp(s1, s2));

	printf("Comparaison 2 : \"%s\" vs \"%s\"\n", s3, s4);
	printf("ft_strcmp = %d | strcmp = %d\n\n", ft_strcmp(s3, s4), strcmp(s3, s4));

	printf("Comparaison 3 : \"%s\" vs \"%s\"\n", s5, s6);
	printf("ft_strcmp = %d | strcmp = %d\n\n", ft_strcmp(s5, s6), strcmp(s5, s6));

	printf("Comparaison 4 : \"%s\" vs \"%s\"\n", s7, s8);
	printf("ft_strcmp = %d | strcmp = %d\n\n", ft_strcmp(s7, s8), strcmp(s7, s8));

	return (0);
}

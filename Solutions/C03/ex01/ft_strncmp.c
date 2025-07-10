#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *s1 = "abcde";
	char *s2 = "abcdf";

	char *s3 = "abcde";
	char *s4 = "abcde";

	char *s5 = "abcde";
	char *s6 = "abcd";

	char *s7 = "abc";
	char *s8 = "";

	// Cas 1 : différence au caractère n
	printf("Test 1 : \"%s\" vs \"%s\", n = 4\n", s1, s2);
	printf("ft_strncmp = %d | strncmp = %d\n\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));

	// Cas 2 : chaînes identiques sur les n premiers caractères
	printf("Test 2 : \"%s\" vs \"%s\", n = 5\n", s3, s4);
	printf("ft_strncmp = %d | strncmp = %d\n\n", ft_strncmp(s3, s4, 5), strncmp(s3, s4, 5));

	// Cas 3 : une chaîne est plus courte
	printf("Test 3 : \"%s\" vs \"%s\", n = 5\n", s5, s6);
	printf("ft_strncmp = %d | strncmp = %d\n\n", ft_strncmp(s5, s6, 5), strncmp(s5, s6, 5));

	// Cas 4 : n = 0
	printf("Test 4 : \"%s\" vs \"%s\", n = 0\n", s7, s8);
	printf("ft_strncmp = %d | strncmp = %d\n\n", ft_strncmp(s7, s8, 0), strncmp(s7, s8, 0));

	return (0);
}

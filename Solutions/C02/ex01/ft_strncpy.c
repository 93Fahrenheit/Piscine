#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src1[] = "Farah";
	char src2[] = "Hello42World";
	char src3[] = "Short";

	char dest1_ft[20];
	char dest1_std[20];
	char dest2_ft[20];
	char dest2_std[20];
	char dest3_ft[20];
	char dest3_std[20];

	unsigned int n1 = 10;
	unsigned int n2 = 5;
	unsigned int n3 = 7;

	// Cas 1 : src plus courte que n
	printf("Cas 1 : src = \"%s\", n = %u\n", src1, n1);
	ft_strncpy(dest1_ft, src1, n1);
	strncpy(dest1_std, src1, n1);
	printf("ft_strncpy : \"%s\"\n", dest1_ft);
	printf("strncpy    : \"%s\"\n\n", dest1_std);

	// Cas 2 : src plus longue que n
	printf("Cas 2 : src = \"%s\", n = %u\n", src2, n2);
	ft_strncpy(dest2_ft, src2, n2);
	strncpy(dest2_std, src2, n2);
	printf("ft_strncpy : \"%s\"\n", dest2_ft);
	printf("strncpy    : \"%s\"\n\n", dest2_std);

	// Cas 3 : src de même taille que n
	printf("Cas 3 : src = \"%s\", n = %u\n", src3, n3);
	ft_strncpy(dest3_ft, src3, n3);
	strncpy(dest3_std, src3, n3);
	printf("ft_strncpy : \"%s\"\n", dest3_ft);
	printf("strncpy    : \"%s\"\n", dest3_std);

	return (0);	

}

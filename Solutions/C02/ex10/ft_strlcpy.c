#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char src[] = "Hello Bitches";
	char dest1[20]; // pour strlcpy
	char dest2[20]; // pour ft_strlcpy
	unsigned int size;

	// Cas 1 : taille normale
	size = 8;
	printf("Cas 1 : size = %u\n", size);
	printf("Valeur retour strlcpy     : %lu\n", strlcpy(dest1, src, size));
	printf("Résultat dest avec strlcpy: %s\n", dest1);
	printf("Valeur retour ft_strlcpy  : %u\n", ft_strlcpy(dest2, src, size));
	printf("Résultat dest avec ft_strlcpy: %s\n\n", dest2);

	// Cas 2 : taille trop petite
	size = 3;
	printf("Cas 2 : size = %u\n", size);
	printf("Valeur retour strlcpy     : %lu\n", strlcpy(dest1, src, size));
	printf("Résultat dest avec strlcpy: %s\n", dest1);
	printf("Valeur retour ft_strlcpy  : %u\n", ft_strlcpy(dest2, src, size));
	printf("Résultat dest avec ft_strlcpy: %s\n\n", dest2);

	// Cas 3 : taille 0
	size = 0;
	printf("Cas 3 : size = %u\n", size);
	printf("Valeur retour strlcpy     : %lu\n", strlcpy(dest1, src, size));
	printf("Valeur retour ft_strlcpy  : %u\n\n", ft_strlcpy(dest2, src, size));

	// Cas 4 : taille suffisante
	size = sizeof(dest1);
	printf("Cas 4 : size = %u\n", size);
	printf("Valeur retour strlcpy     : %lu\n", strlcpy(dest1, src, size));
	printf("Résultat dest avec strlcpy: %s\n", dest1);
	printf("Valeur retour ft_strlcpy  : %u\n", ft_strlcpy(dest2, src, size));
	printf("Résultat dest avec ft_strlcpy: %s\n", dest2);

	return (0);
}

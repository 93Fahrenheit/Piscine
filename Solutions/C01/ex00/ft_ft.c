#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int a;

	ft_ft(&a);
	printf("Valeur de a			: %d\n", a);          // 42
	printf("Adresse de a			: %p\n", (void *)&a); // Adresse mémoire
	printf("Adresse passée			: %p\n", (void *)&a); // Idem
	printf("Contenu à l'adresse (&a)	: %d\n", *(&a)); // 42
	return (0);
}

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int one = 1;
	int five = 5;

	printf("valeur de one avant swap %d\n", one);
	printf("valeur de two avant swap %d\n", five);
	ft_swap(&one, &five);
	printf("valeur de one après swap %d\n", one);
	printf("valeur de two après swap %d\n", five);
	return (0);
}
/*
a = adresse d’un entier (passée en paramètre)
*a = valeur de l’entier pointé par a
&a = adresse mémoire du pointeur a (pas de l’entier pointé)
*/

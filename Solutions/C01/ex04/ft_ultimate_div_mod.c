#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
plus sécure : 
void ft_ultimate_div_mod(int *a, int *b)
{
	int	a_val = *a;
	int	b_val = *b;

	*a = a_val / b_val;
	*b = a_val % b_val;
}*/

int	main()
{
	int	nb1 = 10;
	int	nb2 = 3;
	
	printf("valeur initile nb1 =%d\n", nb1); 
	printf("valeur initile nb2 =%d\n", nb2); 
	ft_ultimate_div_mod(&nb1, &nb2);
	printf("valeur après opération nb1 =%d\n", nb1); 
	printf("valeur après opération nb2 =%d\n", nb2); 
	return (0);
}

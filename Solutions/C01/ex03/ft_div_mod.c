# include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	nb1 = 10;
	int	nb2 = 3;
	int	res_div;
	int	res_mod;
	
	ft_div_mod(nb1, nb2, &res_div, &res_mod);
	printf("resultat division =	%d\n", res_div);
	printf("resultat reste    = 	%d\n", res_mod);
	return (0);
}

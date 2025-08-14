#include <unistd.h>

/*
** Affiche un entier positif ou nul sur la sortie standard.
** Utilise la récursivité : on divise le nombre pour afficher
** les chiffres les plus significatifs en premier.
*/
void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);        // Affiche les chiffres avant l'unité
	c = (n % 10) + '0';          // Convertit le chiffre en caractère ASCII
	write(1, &c, 1);             // Écrit le caractère
}


int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

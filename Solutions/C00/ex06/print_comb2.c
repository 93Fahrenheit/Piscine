#include <unistd.h> 

void	ft_put2nbr(int nb)
{
	int dizaine;
	int unite;

	dizaine = (nb / 10) + '0';
	write(1, &dizaine, 1);
	unite  = (nb % 10) + '0';
	write(1, &unite, 1); 
}

void	ft_print_comb_2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 00;

	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_put2nbr(nb1);
			write(1, " ", 1);
			ft_put2nbr(nb2);

			if (!(nb1 == 98 && nb2 == 99))
				write(1, ", ", 2);
			nb2++;
		}
		nb1++;
	}
}

int	main(void)
{
	ft_print_comb_2();
	return (0);
}

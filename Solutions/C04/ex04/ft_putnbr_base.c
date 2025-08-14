#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i = 0;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int	base_len;

	if (!check_base(base))
		return ;
	base_len = ft_strlen(base);
	nb = (long)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

int	main(void)
{
	// base 10 
	ft_putnbr_base(12345, "0123456789"); // 12345
	write(1, "\n", 1);

	// négatif en base 10
	ft_putnbr_base(-12345, "0123456789"); // -12345
	write(1, "\n", 1);

	// base binaire
	ft_putnbr_base(42, "01"); // 101010
	write(1, "\n", 1);

	// base hexa
	ft_putnbr_base(255, "0123456789ABCDEF"); // FF
	write(1, "\n", 1);

	// base octale
	ft_putnbr_base(42, "poneyvif"); // vn
	write(1, "\n", 1);

	// base invalide (doublon)
	ft_putnbr_base(42, "001234"); // 
	write(1, "\n", 1);

	// base invalide : vide
	ft_putnbr_base(123, ""); // 
	write(1, "\n", 1);

	// base invalide : taille 1
	ft_putnbr_base(123, "0"); //
	write(1, "\n", 1);

	// base invalide : contient '+'
	ft_putnbr_base(123, "012+3456789"); //
	write(1, "\n", 1);

	// base invalide : contient '-'
	ft_putnbr_base(123, "012-3456789"); //
	write(1, "\n", 1);

	// base invalide : doublons non adjacents
	ft_putnbr_base(123, "01234567089"); //
	write(1, "\n", 1);

	return (0);
}


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_hex(unsigned char c)
{
	char *hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char test1[] = "Coucou\ntu vas bien ?";
	char test2[] = "Hello\x01World";          	// \x01 = SOH (start of heading)
	char test3[] = "Bell sound:\a";           	 // \a = 0x07
	char test4[] = "Tab\tSeparated";          	 // \t = 0x09
	char test5[] = "\x7f""DELETE";              	 // 0x7F = DEL
	char test6[] = "Normal string";            	// aucun caractère non imprimable
	char test7[] = "";                         	// chaîne vide
	char test8[] = "Mix: \x01\x02\x03""ABC\n";  	 // plusieurs non imprimables

	ft_putstr_non_printable(test1);
	write(1, "\n", 1);
	ft_putstr_non_printable(test2);
	write(1, "\n", 1);
	ft_putstr_non_printable(test3);
	write(1, "\n", 1);
	ft_putstr_non_printable(test4);
	write(1, "\n", 1);
	ft_putstr_non_printable(test5);
	write(1, "\n", 1);
	ft_putstr_non_printable(test6);
	write(1, "\n", 1);
	ft_putstr_non_printable(test7);
	write(1, "\n", 1);
	ft_putstr_non_printable(test8);
	write(1, "\n", 1);

	return (0);
}

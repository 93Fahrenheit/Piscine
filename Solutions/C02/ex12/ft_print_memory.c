#include <stdio.h>
#include <unistd.h>

void 	ft_print_hexa_addr(void *addr)
{
	unsigned long	nb;
	char		hexa_base[] = "0123456789abcdef";
	char		hexa_addr[16];
	int 		i;

	nb = (unsigned long)addr;
	i = 15;

	while (i >= 0)
	{
		hexa_addr[i] = hexa_base[nb % 16];
		nb = nb / 16;
		i--;
	}
	write(1, hexa_addr, 16);
	return; 
}

void	ft_print_hexa_content(void *addr, unsigned int to_display_in_line)
{
	char 		hexa_base[] = "0123456789abcdef";
	unsigned int 	i;
	unsigned char 	*str = (unsigned char *)addr;
	unsigned char 	c;

	i = 0;
	
	while (i < 16)
	{
		c = str[i];
		if (i < to_display_in_line)
		{
			write(1, &hexa_base[c / 16], 1); 	// ou write(1, hexa_base + (c / 16), 1);
			write(1, &hexa_base[c % 16], 1); 	// ou write(1, hexa_base + (c / 16), 1);	
		}
		else
			write(1, "  ", 2);

		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}



void	ft_print_ascii_content(void *addr, unsigned int to_display_in_line)
{
	unsigned char	*str;
	unsigned int	i; 
	
	str = (unsigned char *)addr;
	i = 0;
	while (i < to_display_in_line)
	{
		if ((str[i] >= 0 && str[i] <= 31 ) || (str[i] == 127))
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size) // size = nombre total d'octet à afficher
{
	unsigned int	readed_bytes;		// Compteur du nombre total d'octets déjà affichés.
	unsigned int	last_bytes;		// Nombre d'octets restants au total à afficher au début de chaque ligne.
	unsigned int	to_display_in_line;	// Nombre d'octets à afficher sur la ligne courante (16 ou moins)
	unsigned char	*data;			// Pointeur sur la mémoire à afficher, casté pour manipulation octet par octet.

	data = (unsigned char *)addr;
	readed_bytes = 0;

	while (readed_bytes < size)
	{
		last_bytes = size - readed_bytes;
		if (last_bytes >= 16)
			 to_display_in_line = 16;
		else
			to_display_in_line = last_bytes;

		ft_print_hexa_addr(data + readed_bytes);
		write(1, ": ", 2);
		ft_print_hexa_content(data + readed_bytes, to_display_in_line);
		ft_print_ascii_content(data + readed_bytes, to_display_in_line);
		write(1, "\n", 1);

		readed_bytes += 16;
	}
	return (addr);
}

int	main()
{
	char str[] = "Pepito\tis\nlike my son, I love him better than any man, et bidou bidouwa";
	ft_print_memory(str, 80);
	return (0);
}

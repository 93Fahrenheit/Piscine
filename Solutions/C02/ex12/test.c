#include <stdio.h>
#include <unistd.h>

void 	*ft_print_adresse(void *addr)
{
	unsigned long n = (unsigned long)addr;
	char hexa_base[] = "0123456789abcdef";
	char hexa_addr[16];
	int i = 15;

	while (i >= 0)
	{
		hexa_addr[i] = hexa_base[n % 16];
		n = n / 16;
		i--;
	}
	write(1, hexa_addr, 16);
	return(addr);
}


int	main()
{
	char str[] = "Pepito";
	printf("%p\n", str);
	ft_print_adresse(str);
	return (0);
}

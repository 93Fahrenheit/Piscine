#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_tab(int *seen)
{
	int i = 0;
	while (i < 256)
	{
		seen[i] = 0;
		i++;
	}
}

void	ft_print_unique(char *s, int *seen)
{
	int i = 0;
	unsigned char c;
	while (s[i])
	{
		c = (unsigned char)s[i];
		if (seen[c] == 0)
		{
			seen[c] = 1;
			ft_putchar(s[i]);
		}
		i++;
	}
}

void	run_union(char *s1, char *s2)
{
	int	seen[256];
	
	init_tab(seen);
	ft_print_unique(s1, seen);
	ft_print_unique(s2, seen);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		run_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}

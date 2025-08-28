#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	in_str(char c, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	already_seen(char *s1, char c, int pos)
{
	int i = 0;

	while (i < pos)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	run_inter(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (already_seen(s1, s1[i], i) == 0 && in_str(s1[i], s2) == 1)
			ft_putchar(s1[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}

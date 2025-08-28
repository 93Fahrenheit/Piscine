#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_transform(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}		
	if (s1[i] == '\0')
		ft_putstr(s1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_transform(argv[1], argv[2]);
	}
	ft_putstr("\n");
	return (0);
}

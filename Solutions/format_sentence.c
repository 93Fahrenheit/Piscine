#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_cut_final_space(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ')
		i--;
	str[i] = '\0';
}

void	ft_format_sentence(char *str)
{
	int	i;

	i = 0;

	ft_cut_final_space(str);
	while (str[i] == ' ')
		i++;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	while (str[i])
	{
		if (str[i] == '!')
			str[i] = '.';
		if (str[i - 1] == '.' || str[i - 1] == '?')
			write(1, " ", 1);
		if ((str[i - 1] == '.' || str[i - 1] == '?') && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	char s[] = ".bonjour!   comment ça va?super!   "; 
	ft_format_sentence(s);
	return (0);
}

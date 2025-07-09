#include <stdio.h>

int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||  (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
	
		if ((i == 0 || is_alphanum(str[i - 1]) == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
	
		else if (i > 0 && is_alphanum(str[i - 1]) == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		i++;
	}
	return (str);
}
	

int	main()
{
	char s1[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"; 
	printf("%s", ft_strcapitalize(s1));

	return (0);
}

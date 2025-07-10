#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (to_find[0] == '\0')
		return (str);

	while (str[i])
	{
		while (to_find[j] && str[i + j] == to_find[j]) 
// str[i + j] permet de comparer chaque caractère de to_find avec les caractères successifs de str, en commençant à l'indice i. Si on est au deuxième caractère de to_find (donc j == 1), alors on compare to_find[1] avec str[i + 1], c’est-à-dire le caractère suivant dans str. Cela revient à faire avancer un deuxième curseur j à partir de la position i dans str.
		{
			j++;
			if (to_find[j] == '\0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}



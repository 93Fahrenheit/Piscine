#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	num = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	main()
{
	char *s1 = "   ---+--+1234ab567";
	char *s2 = "   -42";
	char *s3 = "   +0042";
	char *s4 = "  +-42";
	char *s5 = "abcd123";

	printf("ft_atoi(s1) = %d\n", ft_atoi(s1));
	printf("   atoi(s1) = %d\n\n", atoi(s1));

	printf("ft_atoi(s2) = %d\n", ft_atoi(s2));
	printf("   atoi(s2) = %d\n\n", atoi(s2));

	printf("ft_atoi(s3) = %d\n", ft_atoi(s3));
	printf("   atoi(s3) = %d\n\n", atoi(s3));

	printf("ft_atoi(s4) = %d\n", ft_atoi(s4));
	printf("   atoi(s4) = %d\n\n", atoi(s4));

	printf("ft_atoi(s5) = %d\n", ft_atoi(s5));
	printf("   atoi(s5) = %d\n", atoi(s5));

	return (0);
}

/*
	La ligne suivante permet de construire progressivement le nombre entier à partir
	de la chaîne de caractères (ex : "1234") :

		num = num * 10 + (str[i] - '0');

	Détail du fonctionnement :

	1. str[i] - '0' :
	   - Les caractères '0' à '9' ont des codes ASCII de 48 à 57.
	   - En soustrayant '0', on obtient la valeur numérique réelle du chiffre.
	     Exemple : '3' - '0' = 51 - 48 = 3.

	2. num * 10 :
	   - À chaque itération, on multiplie num par 10 pour décaler les chiffres
	     déjà construits vers la gauche (ex : dizaines → centaines, unités → dizaines, etc.)
	   - Cela prépare l’espace pour ajouter un nouveau chiffre à droite.

	3. num * 10 + (str[i] - '0') :
	   - On ajoute le nouveau chiffre obtenu à la fin du nombre déjà construit.
	   - Cela permet de construire le nombre chiffre par chiffre, en base 10.
	
	4. Exemple complet avec str = "1234"
	Initialisation :
		i = 0
		num = 0

	🧩 1ère itération (i = 0)
		str[i]       = '1'
		str[i] - '0' = 1
		num = 0 * 10 + 1 = 1      → num = 1

	🧩 2ème itération (i = 1)
		str[i]       = '2'
		str[i] - '0' = 2
		num = 1 * 10 + 2 = 12     → num = 12

	🧩 3ème itération (i = 2)
		str[i]       = '3'
		str[i] - '0' = 3
		num = 12 * 10 + 3 = 123   → num = 123

	🧩 4ème itération (i = 3)
		str[i]       = '4'
		str[i] - '0' = 4
		num = 123 * 10 + 4 = 1234 → num = 1234

	✅ Résultat final :
		num = 1234, conversion réussie de "1234" en entier
	
*/

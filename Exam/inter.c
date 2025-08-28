#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Vérifie si le caractère c est présent dans s2.
** Retourne 1 si trouvé, 0 sinon.
*/
int	char_in_s2(char c, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
** Vérifie si le caractère c a déjà été vu
** dans s1 avant la position index_in_s1.
** Retourne 1 si déjà vu, 0 sinon.
*/
int	already_seen(char *s1, char c, int index_in_s1)
{
	int	i;

	i = 0;
	while (i < index_in_s1)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
** Affiche les caractères communs à s1 et s2,
** sans doublons et dans l'ordre d'apparition
** de s1.
*/
void	run_inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (char_in_s2(s1[i], s2) == 1 && already_seen(s1, s1[i], i) == 0)
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


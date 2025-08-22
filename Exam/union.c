/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: you                                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22                                   #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void	ft_putchar(char c)
{
	
	write(1, &c, 1);
}

/*
** But de la fonction : initialiser un tableau "seen" de 256 entiers à 0.
** - seen[c] vaudra 1 si le caractère c (code ASCII) a déjà été affiché.
** - 256 cases couvrent tous les octets possibles (0..255).
*/
void	init_seen(int seen[256])
{
	/* i est l'index de parcours du tableau seen. */
	int	i;

	/* Démarrage à 0. */
	i = 0;
	/* Boucle jusqu'à 255 inclus (condition : i < 256). */
	while (i < 256)
	{
		/* Mettre la case courante à 0 (caractère non encore vu). */
		seen[i] = 0;
		/* Passer à la case suivante. */
		i++;
	}
}

/*
** But de la fonction : parcourir une chaîne s et écrire chaque caractère
** non encore affiché (selon "seen"), dans l'ordre d'apparition.
** - On caste en (unsigned char) pour éviter des indices négatifs si 'char' est signé.
*/
void	print_unique_from(char *s, int seen[256])
{
	/* i : index courant dans la chaîne s. */
	int				i;
	/* c : code octet du caractère courant, en non signé pour indexer seen[]. */
	unsigned char	c;

	/* Départ au début de s. */
	i = 0;
	/* Tant qu'on n'a pas atteint le terminateur nul '\0'. */
	while (s[i])
	{
		/* Conversion du caractère en unsigned char pour l'utiliser comme index 0..255. */
		c = (unsigned char)s[i];
		/* Si ce caractère n'a pas encore été écrit... */
		if (seen[c] == 0)
		{
			/* ...on le marque comme déjà vu... */
			seen[c] = 1;
			/* ...et on l'affiche une seule fois. */
			ft_putchar(s[i]);
		}
		/* On avance au caractère suivant. */
		i++;
	}
}

/*
** But de la fonction : orchestrer l'exercice "union".
** - Afficher tous les caractères uniques de s1, puis ceux de s2 non encore vus.
** - L'ordre final respecte l'ordre des deux chaînes sur la ligne de commande.
*/
void	run_union(char *s1, char *s2)
{
	/* Déclare le tableau des caractères vus (1 case par valeur d'octet). */
	int	seen[256];

	/* Initialise toutes les cases à 0 (aucun caractère affiché au départ). */
	init_seen(seen);
	/* Affiche les caractères uniques de s1 dans l'ordre. */
	print_unique_from(s1, seen);
	/* Affiche ensuite les caractères de s2 qui n'ont pas encore été affichés. */
	print_unique_from(s2, seen);
}



int		main(int ac, char **av)
{
	/* Si on a exactement deux arguments utilisateur (au total 3 avec le binaire). */
	if (ac == 3)
		/* Délègue la logique à run_union() sans manipuler av[] ici. */
		run_union(av[1], av[2]);
	/* Affiche le saut de ligne final quelles que soient les conditions. */
	ft_putchar('\n');
	/* Code de retour 0 = exécution réussie. */
	return (0);
}


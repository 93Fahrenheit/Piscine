/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: you                                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22                                   #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
** But de la fonction : déterminer si s1 est une sous-séquence de s2.
** - Sous-séquence = on retrouve tous les caractères de s1 dans s2
**   dans le même ordre, pas forcément contigus.
** - Retourne 1 si oui, 0 sinon.
*/
int		is_subsequence(char *s1, char *s2)
{
	/* i : index qui avance dans s1. */
	int	i;
	/* j : index qui avance dans s2. */
	int	j;

	/* Démarrer au début de s1. */
	i = 0;
	/* Démarrer au début de s2. */
	j = 0;
	/* Tant qu'il reste des caractères à valider dans s1 ET à lire dans s2. */
	while (s1[i] && s2[j])
	{
		/* Si le caractère actuel de s2 correspond au prochain attendu de s1... */
		if (s2[j] == s1[i])
			/* ...on a validé ce caractère de s1 : on passe au suivant dans s1. */
			i++;
		/* Dans tous les cas, on avance dans s2 pour continuer la recherche. */
		j++;
	}
	/* Si i est arrivé au '\0' de s1, on a trouvé tous ses caractères dans l'ordre. */
	if (s1[i] == '\0')
		return (1);
	/* Sinon, il manque au moins un caractère : ce n'est pas une sous-séquence. */
	return (0);
}

/*
** But de la fonction : orchestrer l'exercice wdmatch.
** - Si s1 est une sous-séquence de s2, on affiche s1 via ft_putstr().
** - Sinon, on n'affiche rien (le '\n' sera géré par main).
*/
void	run_wdmatch(char *s1, char *s2)
{
	/* Appelle is_subsequence() pour décider si on doit écrire s1. */
	if (is_subsequence(s1, s2))
		/* Si oui, on affiche exactement s1. */
		ft_putstr(s1);
}

int	main(int ac, char **av)
{
	/* Si on a exactement deux arguments utilisateur (au total 3 avec le binaire). */
	if (ac == 3)
		/* Délègue la logique à run_wdmatch() sans manipuler av[] ici. */
		run_wdmatch(av[1], av[2]);
	/* Affiche le saut de ligne final quelles que soient les conditions. */
	ft_putchar('\n');
	/* Code de retour 0 = exécution réussie. */
	return (0);
}


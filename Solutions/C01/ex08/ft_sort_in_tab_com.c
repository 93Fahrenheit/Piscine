#include <stdio.h> 

// 🔁 Fonction utilitaire pour échanger deux entiers via des pointeurs
void	ft_swap(int *a, int *b)
{
	int temp;        // variable temporaire pour stocker une des deux valeurs

	temp = *a;       // on stocke la valeur pointée par a (valeur à l’adresse a)
	*a = *b;         // on remplace la valeur à l’adresse a par celle à l’adresse b
	*b = temp;       // on place l’ancienne valeur de a à l’adresse b
}

// 🔽 Fonction qui trie un tableau d'entiers en ordre croissant
// selon un algorithme de type "tri à bulles"
void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0; // i sert d'index pour parcourir le tableau

	// boucle principale : on répète le processus tant que i n'est pas arrivé à l'avant-dernier élément
	while (i < size - 1)
	{
		// ici on compare l'élément courant avec le suivant
		if (tab[i] > tab[i + 1])
		{
			// si l'élément courant est plus grand que le suivant : ils ne sont pas dans l'ordre croissant

			// donc on les échange avec la fonction ft_swap
			ft_swap(&tab[i], &tab[i + 1]);

			// ⚠️ très important :
			// on remet i à 0 pour recommencer le tableau depuis le début
			// pourquoi ? parce que le swap a pu casser l’ordre d’éléments qui étaient déjà "triés"
			// en recommençant à 0, on s’assure que tout est bien revérifié
			i = 0;
		}
		else
		{
			// sinon, si les deux éléments sont dans le bon ordre,
			// on passe simplement à la comparaison suivante
			i++; // on avance d’un cran dans le tableau
		}
	}
	// la boucle s'arrête quand on atteint la fin du tableau sans avoir eu besoin de swap
	// ce qui veut dire que le tableau est bien trié
}

int	main()
{
	int i = 0; // variable pour parcourir le tableau lors de l'affichage

	// tableau d'entiers à trier
	int tab[] = {3, 6, 2, 7, 5, 1, 9, 4, 8};

	// on calcule dynamiquement le nombre d'éléments du tableau
	int size = sizeof(tab) / sizeof(tab[0]);

	// appel de la fonction de tri
	ft_sort_int_tab(tab, size);

	// affichage du tableau trié
	while (i < size)
	{
		// affichage de l'élément courant
		printf("%d", tab[i]);

		// on affiche une virgule et un espace après chaque élément,
		// sauf après le dernier pour éviter une virgule finale
		if (i < size - 1)
			printf(", ");
		
		i++; // on passe à l’élément suivant
	}
	
	return (0); 
}


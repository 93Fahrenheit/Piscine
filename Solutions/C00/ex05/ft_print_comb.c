#include <unistd.h> // Inclusion de la bibliothèque nécessaire pour utiliser write

// Fonction utilitaire pour afficher un seul caractère sur la sortie standard
void    ft_putchar(char c)
{
    write(1, &c, 1); // Affiche le caractère c sur la sortie standard (écran)
}

// Fonction principale qui affiche toutes les combinaisons de 3 chiffres différents, dans l'ordre croissant
void    ft_print_comb(void)
{
    int i; // Premier chiffre de la combinaison (la "petite aiguille" de l'horloge)
    int j; // Deuxième chiffre (la "grande aiguille")
    int k; // Troisième chiffre (la "trotteuse")

    i = -1; // On initialise à -1 pour que la première exécution de ++i le place à 0 (début des combinaisons)
    while (++i <= 7) // i va de 0 à 7. On s'arrête à 7 car ensuite, j et k ne pourraient plus former des combinaisons valides croissantes
    {
        j = i; // j doit toujours être strictement supérieur à i, on l'initialise à i et on l'incrémente juste après
        while (++j <= 8) // j va de i + 1 jusqu'à 8. On s'arrête à 8 car k doit encore pouvoir être supérieur à j
        {
            k = j; // k doit être strictement supérieur à j. On l'initialise à j puis on l'incrémente
            while (++k <= 9) // k va de j + 1 jusqu'à 9. C’est la dernière position possible pour le 3e chiffre
            {
                // Affichage de la combinaison de chiffres actuelle
                ft_putchar(i + '0'); // Convertit l'entier i en caractère ASCII, ex : 1 => '1'
                ft_putchar(j + '0'); // Affiche j
                ft_putchar(k + '0'); // Affiche k

                // On affiche ", " sauf après la dernière combinaison (789)
                if (i != 7) // La dernière valeur de i est 7 quand on est à 789
                {
                    write(1, ", ", 2); // Affiche une virgule suivie d’un espace
                }
            }
        }
    }
}


int main(void)
{
    ft_print_comb();     return (0); 
}


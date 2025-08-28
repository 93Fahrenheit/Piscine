#include "includes/ft.h"

int main(void)
{
    int a = 5;
    int b = 10;

    ft_putchar('A');
    ft_putchar('\n');

    ft_putstr("Test de ft_putstr\n");

    ft_swap(&a, &b);
    if (a == 10 && b == 5)
        ft_putstr("ft_swap OK\n");

    if (ft_strlen("Hello") == 5)
        ft_putstr("ft_strlen OK\n");

    if (ft_strcmp("abc", "abc") == 0)
        ft_putstr("ft_strcmp egal OK\n");
    if (ft_strcmp("abc", "abd") < 0)
        ft_putstr("ft_strcmp ordre OK\n");

    return (0);
}


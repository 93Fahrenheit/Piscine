#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    printf("%p -> %p -> %c\n", av, *av, **av);
    printf("%p -> %p -> %c\n", av + 1, *(av + 1), **(av + 1));
    printf("%p\n", av[1]);
    av[2] = malloc(10);
    av[2][0] = 'a';
    printf("%p -> %p -> %c\n", av + 2, *(av + 2), **(av + 2));
}
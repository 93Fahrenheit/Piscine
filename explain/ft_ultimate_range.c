#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{   
    if (max <= min)
    {
        *range = NULL;
        return(0);
    }
    
    int *tmp_range = malloc((max - min) * sizeof(int));
    if (!tmp_range)
        return(0);
    int i = 0;
    while (i < max - min)
    {
        tmp_range[i] = min + i;
        i++;
    }
    printf("%p\n", tmp_range);
    *range = tmp_range;
    return(max - min);
}

int main()
{
    int *range;
    printf("%d", ft_ultimate_range(&range, 4, 12));

}
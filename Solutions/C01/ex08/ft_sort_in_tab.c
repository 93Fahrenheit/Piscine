#include <stdio.h>

//buble sort
void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0;


	while (i < size - 1 )
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int	main()
{	
	int i = 0;
	int tab[] = {3, 6, 2, 7, 5, 1, 9, 4, 8};
	int size = sizeof(tab) / sizeof (tab[0]);

	ft_sort_int_tab(tab, 9);
	while (i < size)
	{	
    		printf("%d", tab[i]); 
		if (i < size - 1)
       			 printf(", ");
    		i++;
	}
	return (0);
}


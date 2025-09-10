/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:55:22 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/08 14:05:59 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int main(void)
{
	int tab[] = {17, 23, 42, 93, 32, 88, 99}; 
	int i = 0;
	int size = sizeof(tab) / sizeof(tab[0]); 

	printf("Avant inversion\n");
	while (i < size)
	{
	printf("%d", tab[i]);
	if (i < size - 1)
		printf(", ");
	i++;
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Après inversion\n");
	i = 0;
	while (i < size)
	{
	printf("%d", tab[i]);
	if (i < size - 1)
		printf(", ");
	i++;
	}
	printf("\n");

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:16:57 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/25 13:34:14 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main()
{
	int	min = 5;
	int	max = 12;
	int	size = max - min;
	int	*tab = ft_range(min, max);
	int	i = 0;

	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/

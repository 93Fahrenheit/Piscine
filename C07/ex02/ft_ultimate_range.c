/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:34:24 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/19 16:27:47 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tmp;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tmp = malloc(size * sizeof(int));
	if (!tmp)
		return (-1);
	while (i < size)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size);
}
/*
int	main()
{
	int	*ptr;
	int	i = 0;
	int	size = ft_ultimate_range(&ptr, 5, 12);
	
	printf("size = %d\n\n", size);
	printf("values: \n");
	while (i < size)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/

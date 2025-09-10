/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:37:47 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/07 17:53:32 by fael-abb         ###   ########.fr       */
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
/*
int	main()
{
	int	nb1 = 5;
	int	nb2 = 10;

	printf("nb1 before swap : %d\n", nb1);
	printf("nb2 before swap : %d\n", nb2);
	ft_swap(&nb1, &nb2);
	printf("nb1 after swap : %d\n", nb1);
	printf("nb2 after swap : %d\n", nb2);
	return (0);
}*/

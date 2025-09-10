/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:24:39 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/08 12:36:37 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main()
{
	int	nb1 = 10;
	int	nb2 = 3;
	
	ft_ultimate_div_mod(&nb1, &nb2);
	printf("values after div_mod:\n*a = %d\n", nb1);
	printf("*b = %d\n", nb2);
}*/

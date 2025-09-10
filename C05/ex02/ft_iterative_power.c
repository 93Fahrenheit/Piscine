/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:13:36 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/17 11:39:35 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power != 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
	return (0);
}*/

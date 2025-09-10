/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:21:17 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/17 12:08:04 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nbb;

	nbb = nb;
	if (nb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nbb)
	{
		if (nbb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(21));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:19:47 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/17 12:03:35 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nbb;

	nbb = nb;
	if (nbb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nbb)
	{
		if (nbb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(21));
	return (0);
}*/

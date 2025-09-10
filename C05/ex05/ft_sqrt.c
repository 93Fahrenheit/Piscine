/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:18:53 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/17 16:37:36 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned long	racine;
	unsigned int	nbb;

	nbb = (unsigned long)nb;
	racine = 1;
	if (nbb <= 0)
		return (0);
	while ((racine * racine) < nbb)
	{
		racine++;
	}
	if ((racine * racine) == nbb)
		return ((int)racine);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(7));
	return (0);
}*/

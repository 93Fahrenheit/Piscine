/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:28:40 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/08 12:07:52 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put2digits(int nb)
{
	int	dizaine;
	int	unite;

	dizaine = (nb / 10) + '0';
	write(1, &dizaine, 1);
	unite = (nb % 10) + '0';
	write(1, &unite, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 00;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_put2digits(nb1);
			write(1, " ", 1);
			ft_put2digits(nb2);
			if (!(nb1 == 98 && nb2 == 99))
				write(1, ", ", 2);
			nb2++;
		}
		nb1++;
	}
}
/*
int 	main(void)
{
	ft_print_comb2();
	return (0);
}*/

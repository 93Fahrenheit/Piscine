/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:45:17 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/07 12:27:44 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i <= 7)
	{
		j = i;
		while (++j <= 8)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				if (i != 7)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
/*
int	main()
{
	ft_print_comb();
	return (0);
}*/

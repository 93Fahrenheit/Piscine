/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:00:09 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/06 18:10:29 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}

/*
int	main(void)
{
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_is_negative(-7);
	write(1, "\n", 1);
	return (0);	
}*/

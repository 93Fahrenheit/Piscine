/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:54:19 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/08 12:22:59 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a = 10;
	int b = 3;
	int res_div;
	int res_mod;

	ft_div_mod(a, b, &res_div, &res_mod);
	printf("*div = %d\n", res_div);
	printf("*mod = %d\n", res_mod);
	return (0);
}*/

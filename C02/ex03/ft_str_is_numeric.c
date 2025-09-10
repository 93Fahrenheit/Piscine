/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:08:15 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/11 18:32:12 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char s1[] = "0123456789";
	char s2[] = "01234abcd";
	char s3[] = "abcdef";

	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d\n", ft_str_is_numeric(s2));
	printf("%d\n", ft_str_is_numeric(s3));
	return (0);
}*/

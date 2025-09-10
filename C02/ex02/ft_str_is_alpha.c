/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:27:01 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/10 14:07:41 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char s1[] = "hello world";
	char s2[] = "abcd1234";
	char s3[] = "StudenT";
	
	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	return (0);
}*/

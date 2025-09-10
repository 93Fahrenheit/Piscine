/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:46:25 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/10 21:50:43 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char s1[] = "STUD 42";
	char s2[] = "student";
	char s3[] = "STUDENT";

	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d\n", ft_str_is_uppercase(s2));
	printf("%d\n", ft_str_is_uppercase(s3));
	return (0);
}*/

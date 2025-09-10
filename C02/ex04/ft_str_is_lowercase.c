/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:33:46 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/10 21:45:26 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char s1[] = "stud 42";
	char s2[] = "student";
	char s3[] = "Student";

	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
}*/

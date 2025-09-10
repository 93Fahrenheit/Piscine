/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:47:40 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/11 19:58:11 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char str1[] = "I want a burger";
	char str2[] = "42 life";

	char str3[] = "yolo";
	char str4[] = "booooooooouh";

	char str5[] = "";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	printf("%d\n", strcmp(str3, str4));
	printf("%d\n", ft_strcmp(str1, str5));
	printf("%d\n", strcmp(str1, str5));
}*/

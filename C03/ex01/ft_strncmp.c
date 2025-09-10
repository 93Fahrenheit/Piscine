/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:58:21 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/11 21:11:44 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char str1[] = "I want a burger";
	char str2[] = "42 life";

	char str3[] = "yolo";
	char str4[] = "booooooooouh";

	char str5[] = "yolo";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str3, str4, 0));
	printf("%d\n", strncmp(str3, str4, 0));
	printf("%d\n", ft_strncmp(str3, str5, 20));
	printf("%d\n", strncmp(str5, str5, 20));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:11:29 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/10 22:18:13 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char s1[] = "HELLO BITCH";
	char s2[] = "HeLLo123";
	char s3[] = "42!";
	char s4[] = "";
	char s5[] = "YoLoLo";

        printf("Avant : HELLO BITCH → Après : %s\n", ft_strlowcase(s1));
        printf("Avant : HeLLo123 → Après : %s\n", ft_strlowcase(s2));
        printf("Avant : 42! → Après : %s\n", ft_strlowcase(s3));
        printf("Avant : (vide) → Après : %s\n", ft_strlowcase(s4));
        printf("Avant : YoLoLo → Après : %s\n", ft_strlowcase(s5));

        return (0);
}*/

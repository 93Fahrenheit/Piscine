/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:48:56 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/11 12:16:18 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char dest[10];
	char src1[] = "Hello";
	char src2[] = "42 Student";
	
	printf("src1 size : \n%d\n", ft_strlcpy(dest, src1, 3));
	printf("dest = : %s\n\n", dest);
	printf("src2 size %d\n", ft_strlcpy(dest, src2, 6));
	printf("dest = : %s\n", dest);
	return (0);
}*/

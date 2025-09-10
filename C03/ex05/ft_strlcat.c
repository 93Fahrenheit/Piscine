/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:29:10 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/13 13:24:09 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*int	main(void)
{
        char dest[12] = "Hello";
        char *src = " world!";

        unsigned int size = 8;
        unsigned int res = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("ft_strlcat → dest1 = \"%s\", return = %u\n", dest, res);
       
        return (0);
}*/

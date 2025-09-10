/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:34:33 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/14 16:16:41 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_str(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -(*sign);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	i;
	int	base_len;

	nb = 0;
	if (check_base(base) == 0)
		return (0);
	base_len = ft_strlen(base);
	i = check_str(str, &sign);
	while (get_index(str[i], base) != -1)
	{
		nb = nb * base_len + get_index(str[i], base);
		i++;
	}
	return (nb * sign);
}

/*int main(void)
{
    // base 10
    char *base1 = "0123456789";
    char *str1 = " -1234";
    printf("Test 1 : %d\n", ft_atoi_base(str1, base1)); // -1234

    // base 16
    char *base2 = "0123456789ABCDEF";
    char *str2 = " 2F";
    printf("Test 2 : %d\n", ft_atoi_base(str2, base2)); // 47

    // base 2
    char *base3 = "01";
    char *str3 = " 1101";
    printf("Test 3 : %d\n", ft_atoi_base(str3, base3)); // 13

    // base avec caractère non valide (x)
    char *base4 = "0123456789";
    char *str4 = "1234x567";
    printf("Test 4 : %d\n", ft_atoi_base(str4, base4)); // 1234

    // base non valide : doublon (0)
    char *base5 = "01234056789";
    char *str5 = "12345";
    printf("Test 5 : %d\n", ft_atoi_base(str5, base5)); // 0

    // str avec plusieurs signes
    char *base6 = "0123456789";
    char *str6 = " --+---1234";
    printf("Test 6 : %d\n", ft_atoi_base(str6, base6)); // -1234

    // str avec un seul signe
    char *base7 = "0123456789";
    char *str7 = " +42";
    printf("Test 7 : %d\n", ft_atoi_base(str7, base7)); // 42

    // base non valide : 1 seul char
    char *base8 = "1";
    char *str8 = "1234";
    printf("Test 8 : %d\n", ft_atoi_base(str8, base8)); // 0

    // Base invalide : base vide
    char *base9 = "";
    char *str9 = "1234";
    printf("Test 9 : %d\n", ft_atoi_base(str9, base9)); // 0

    return (0);
}*/

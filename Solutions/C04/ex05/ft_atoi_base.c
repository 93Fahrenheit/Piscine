#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i = 0;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

int	get_index(char c, char *base)
{
	int	i = 0;

	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;

	if (check_base(base) == 0)
		return (0);
	while (str[i] >= 9 && str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (get_index(str[i], base) == -1)
			return (0);
		result = result * ft_strlen(base) + get_index(str[i], base);
		i++;
	}
	return (result * sign);
}

int main(void)
{
    // base 10
    char *base1 = "0123456789";
    char *str1 = "  -1234";
    printf("Test 1 : %d\n", ft_atoi_base(str1, base1));  // -1234

    // base 16 
    char *base2 = "0123456789ABCDEF";
    char *str2 = "  2F";
    printf("Test 2 : %d\n", ft_atoi_base(str2, base2));  // 47 

    // base 2
    char *base3 = "01";
    char *str3 = "  1101";
    printf("Test 3 : %d\n", ft_atoi_base(str3, base3));  // 13

    // base non valide : avec caractère non valide (x)
    char *base4 = "0123456789";
    char *str4 = "1234x567";
    printf("Test 4 : %d\n", ft_atoi_base(str4, base4));  // 0

    // base non valide : doublon (0)
    char *base5 = "01234056789"; 
    char *str5 = "12345";
    printf("Test 5 : %d\n", ft_atoi_base(str5, base5));  // 0

    // str avec signes
    char *base6 = "0123456789";
    char *str6 = "  --+--1234";
    printf("Test 6 : %d\n", ft_atoi_base(str6, base6));  // -1234

    // str avec un seul signe
    char *base7 = "0123456789";
    char *str7 = " +42";
    printf("Test 7 : %d\n", ft_atoi_base(str7, base7));  // 42

    // base non valide : 1 seul char
    char *base8 = "1";  
    char *str8 = "1234";
    printf("Test 8 : %d\n", ft_atoi_base(str8, base8));  // 0 

    // Base invalide : base vide
    char *base9 = "";  
    char *str9 = "1234";
    printf("Test 9 : %d\n", ft_atoi_base(str9, base9));  // 0 

    return (0);
}

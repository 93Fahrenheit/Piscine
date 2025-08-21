#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		check_base(char *base);
int		ft_atoi_base(char *str, char *base);

int	nbr_len_base(long n, int base_len)
{
	int		len;
	long	tmp;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	while (tmp > 0)
	{
		tmp /= base_len;
		len++;
	}
	return (len);
}

void	ft_putnbr_base_to_str(long value, char *base, char *dst, int res_len)
{
	int				base_len;
	unsigned long	abs_value;

	base_len = ft_strlen(base);
	dst[res_len] = '\0';
	if (value == 0)
	{
		dst[0] = base[0];
		return ;
	}
	if (value < 0)
	{
		dst[0] = '-';
		abs_value = (unsigned long)(-value);
	}
	else
		abs_value = (unsigned long)value;
	while (abs_value > 0)
	{
		res_len--;
		dst[res_len] = base[abs_value % base_len];
		abs_value = abs_value / base_len;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		valid_from;
	int		valid_to;
	int		base_to_len;
	int		res_len;
	long	value;
	char	*res;

	valid_from = check_base(base_from);
	valid_to = check_base(base_to);
	if (valid_from == 0 || valid_to == 0)
		return (0);
	value = (long)ft_atoi_base(nbr, base_from);
	base_to_len = ft_strlen(base_to);
	res_len = nbr_len_base(value, base_to_len);
	res = malloc(res_len + 1);
	if (!res)
		return (0);
	ft_putnbr_base_to_str(value, base_to, res, res_len);
	return (res);
}

int	main(void)
{
	char *res;

	/* Test 1 : Décimal -> Binaire */
	res = ft_convert_base("42", "0123456789", "01");
	printf("Test 1 : %s\n", res);
	free(res);

	/* Test 2 : Décimal -> Hexadécimal */
	res = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
	printf("Test 2 : %s\n", res);
	free(res);

	/* Test 3 : Hexadécimal -> Décimal */
	res = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
	printf("Test 3 : %s\n", res);
	free(res);

	/* Test 4 : Décimal négatif -> Binaire */
	res = ft_convert_base("-42", "0123456789", "01");
	printf("Test 4 : %s\n", res);
	free(res);

	/* Test 5 : Base custom */
	res = ft_convert_base("42", "0123456789", "poneyvif");
	printf("Test 5 : %s\n", res);
	free(res);

	/* Test 6 : Zéro */
	res = ft_convert_base("0", "0123456789", "01");
	printf("Test 6 : %s\n", res);
	free(res);

	/* Test 7 : source sans digit valide -> retourne 0 donc base_to[0] */
	res = ft_convert_base("  --++xyz", "0123456789", "01");
	printf("Test 7 : %s\n", res);
	free(res);

	/* Test 8 : signes multiples */
	res = ft_convert_base("   --+-42", "0123456789", "01");
	printf("Test 8 : %s\n", res);
	free(res);

	/* Test 9 : lecture stoppée au premier char hors base */
	res = ft_convert_base("1012", "01", "0123456789");
	printf("Test 9 : %s\n", res);
	free(res);

	/* Test 10 : INT_MIN */
	res = ft_convert_base("-2147483648", "0123456789", "0123456789");
	printf("Test 10 : %s\n", res);
	free(res);

	/* Test 11 : INT_MAX */
	res = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
	printf("Test 11 : %s\n", res);
	free(res);

	/* Test 12 : base_from trop courte (< 2) */
	res = ft_convert_base("42", "0", "01");
	printf("Test 12 : %s\n", res);
	free(res);

	/* Test 13 : base_to trop courte (< 2) */
	res = ft_convert_base("42", "0123456789", "0");
	printf("Test 13 : %s\n", res);
	free(res);

	/* Test 14 : base_from avec doublons */
	res = ft_convert_base("42", "00123456789", "01");
	printf("Test 14 : %s\n", res);
	free(res);

	/* Test 15 : base_to avec doublons */
	res = ft_convert_base("42", "0123456789", "001");
	printf("Test 15 : %s\n", res);
	free(res);

	/* Test 16 : base_from contient '+' */
	res = ft_convert_base("42", "01234+6789", "01");
	printf("Test 16 : %s\n", res);
	free(res);

	/* Test 17 : base_to contient '-' */
	res = ft_convert_base("42", "0123456789", "0123-56789");
	printf("Test 17 : %s\n", res);
	free(res);

	/* Test 18 : base_from contient espace */
	res = ft_convert_base("42", "0123 56789", "01");
	printf("Test 18 : %s\n", res);
	free(res);

	/* Test 19 : base_to contient tabulation */
	res = ft_convert_base("42", "0123456789", "01\t234");
	printf("Test 19 : %s\n", res);
	free(res);

	return (0);
}

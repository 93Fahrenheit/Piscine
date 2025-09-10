/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:16:59 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/12 20:05:51 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(char c)
{	
	unsigned char	uc;
	char			*hex;

	uc = (unsigned char)c;
	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[uc / 16]);
	ft_putchar(hex[uc % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_put_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main()
{
	char test1[] = "Hello\nHow are you?";
        char test2[] = "Hello\x01World";
        char test3[] = "Bell sound:\a";
        char test4[] = "Tab\tSeparated";
        char test5[] = "\x7f""DELETE"; 
        char test6[] = "Normal string";
        char test7[] = "";
        char test8[] = "Mix: \x01\x02\x03""ABC\n";

        ft_putstr_non_printable(test1);
        write(1, "\n", 1);
        ft_putstr_non_printable(test2);
        write(1, "\n", 1);
        ft_putstr_non_printable(test3);
        write(1, "\n", 1);
        ft_putstr_non_printable(test4);
        write(1, "\n", 1);
        ft_putstr_non_printable(test5);
        write(1, "\n", 1);
        ft_putstr_non_printable(test6);
        write(1, "\n", 1);
        ft_putstr_non_printable(test7);
        write(1, "\n", 1);
        ft_putstr_non_printable(test8);
        write(1, "\n", 1);

        return (0);
}*/

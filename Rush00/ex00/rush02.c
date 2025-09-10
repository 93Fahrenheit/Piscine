/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkharraj <mkharraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:53:31 by mkharraj          #+#    #+#             */
/*   Updated: 2025/08/10 19:12:03 by mkharraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char left, char inside, char right)
{
	int	column_index;

	if (x <= 0)
		return ;
	ft_putchar(left);
	column_index = 1;
	while (column_index < x - 1)
	{
		ft_putchar(inside);
		column_index++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_index;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'A', 'B', 'A');
	line_index = 1;
	while (line_index < y - 1)
	{
		print_line(x, 'B', ' ', 'B');
		line_index++;
	}
	if (y > 1)
		print_line(x, 'C', 'B', 'C');
}

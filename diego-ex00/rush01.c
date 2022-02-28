/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:11:07 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/27 19:23:35 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);

void	ft_what_print1(int x, int y, int max_x, int max_y)
{
	if (x == 1 && y == 1)
		ft_putchar('/');
	else if (x == max_x && y == 1)
		ft_putchar('\\');
	else if (x == 1 && y == max_y)
		ft_putchar('\\');
	else if (x == max_x && y == max_y)
		ft_putchar('/');
	else if (x >= 2 && (y == 1 || y == max_y))
		ft_putchar('*');
	else if (x == 1 || x == max_x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	x_table;
	int	y_table;

	if (x <= 0 || y <= 0)
	{
		write(1, "Please enter a valid number\n", 29);
		return ;
	}
	y_table = 0;
	x_table = 0;
	while (++y_table <= y)
	{
		while (++x_table <= x)
		{
			ft_what_print1(x_table, y_table, x, y);
		}
		x_table = 0;
		write(1, "\n", 1);
	}
}

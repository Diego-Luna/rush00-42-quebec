/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:56 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/27 19:23:58 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);

void	ft_what_print2(int x, int y, int max_x, int max_y)
{
	if (x == 1 && y == 1)
		ft_putchar('A');
	else if (x == max_x && y == 1)
		ft_putchar('A');
	else if (x == 1 && y == max_y)
		ft_putchar('C');
	else if (x == max_x && y == max_y)
		ft_putchar('C');
	else if (x >= 2 && (y == 1 || y == max_y))
		ft_putchar('B');
	else if (x == 1 || x == max_x)
		ft_putchar('B');
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
			ft_what_print2(x_table, y_table, x, y);
		}
		x_table = 0;
		write(1, "\n", 1);
	}
}

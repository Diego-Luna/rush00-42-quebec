/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:11:07 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/27 17:57:44 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);

void	ft_what_print(int x, int y, int max_x, int max_y)
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

void	rush(int len, int hei)
{
	int	x;
	int	y;

	if (len < 0 || hei < 0)
	{
		write(1, "Please enter a valid number\n", 29);
		return ;
	}
	y = 0;
	x = 0;
	while (++y <= hei)
	{
		while (++x <= len)
		{
			ft_what_print(x, y, len, hei);
		}
		x = 0;
		write(1, "\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:56 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/27 17:21:54 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);

void	ft_what_print(int x, int y, int max_x, int max_y)
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

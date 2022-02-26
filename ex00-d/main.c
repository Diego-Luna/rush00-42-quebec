/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:45:41 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/26 15:09:46 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putchar(int x,int y,int max_x,int max_y)
{
	if ((x == 1 && y == 1 ) || (x == max_x && y == 1) || (x == 1 && y == max_y)  || (x == max_x && y == max_y))
	{
		write(1, "o", 1);
	}
	else if ( x >= 2 && ( y == 1 || y == max_y ))
	{
		write(1, "-", 1);
	}
	else if ( x == 1 || x == max_x )
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

void	rush(int len, int hei)
{
	if (len < 0 || hei < 0 || len >= '0' || hei >= '0')
	{
		write(1, "Please enter a valid number\n", 29);
		return;
	}

	int x;
	int y;
	
	y = 0; 
	x = 0;
	while(++y <= hei)
	{
		while(++x <= len)
		{
			ft_putchar(x, y, len, hei);
		}
		x = 0;
		write(1, "\n", 1);
	}
}

int main(void)
{
	rush(48, 9);
	return (0);
}

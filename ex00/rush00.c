/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:56 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/26 19:32:36 by jlevesqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int len, int hei);

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
			ft_putchar(x, y, len, hei);
		}
		x = 0;
		write(1, "\n", 1);
	}
}

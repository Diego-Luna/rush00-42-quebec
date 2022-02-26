/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:56 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/26 15:52:09 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

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

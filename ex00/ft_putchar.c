/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:50 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/26 19:43:14 by jlevesqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int max_x, int max_y)
{
	if ((x == 1 && y == 1) || (x == max_x && y == 1))
	{
		write(1, "o", 1);
	}
	else if ((x == 1 && y == max_y) || (x == max_x && y == max_y))
	{
		write(1, "o", 1);
	}
	else if (x >= 2 && (y == 1 || y == max_y))
	{
		write(1, "-", 1);
	}
	else if (x == 1 || x == max_x)
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

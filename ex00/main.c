/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:03:45 by dantremb          #+#    #+#             */
/*   Updated: 2022/02/26 13:39:38 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	rush(int lmax, int hmax)
	{
	int	h;
	int	l;

	h = 0;
	while (h < hmax)
	{
	l = 0;
		while (l < lmax)
		{
			ft_putchar(111);
			l++;
		}
		write(1, "\n", 1);
		h++;
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}

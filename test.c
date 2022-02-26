/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlevesqu <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:51:00 by jlevesqu          #+#    #+#             */
/*   Updated: 2022/02/26 17:22:31 by jlevesqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.c"
#include <stdio.h> // test
#include <unistd.h> // test

void	rush (int a, int b);

int main(void)
{
	int	a = -1;
	int	b = -1;
	int i = 0;

	printf("\n");
	printf("test.c only for quick test matter, it's a loop to test multiple time, 5 times. CTRL-C' to quit\n\n");
	
	while (++i <= 5)
	{
	printf("How many colomn X=a : ");	
	scanf("%d", &a);
	printf("\n");

	printf("Enter Lines number (height) Y=b : ");
	scanf("%d", &b);
	printf("\n");

	rush(a, b);
	}

	printf("\n\n -- TADAM!! --The game is over -- Too bad -- Insert Coin to play again --\n\n");

	return(0);
}

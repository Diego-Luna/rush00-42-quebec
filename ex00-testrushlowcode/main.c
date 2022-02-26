#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int	a = -1;
	int	b = -1;
	int	check_int;

	int	x = 1;
	int	y = 1;

	printf("\n");

	while (a < 1 || a > 42)
	{
		printf("How many colomn X=a : ");
		check_int = scanf("%d", &a);

		// test function need to be done and optimised in both keylog - only on x for dev and test

		if (check_int == 0) { a = 0; printf("Hey buddy, enter only number, no biggie!"); }
		if (a <= 0) { printf("Your cube can't be in the fourth dimension buddy!"); }
		if (a > 42) { printf("For the moment the pool cannot be more than 42x 42 as we have some neightbour in the cpu memory, don't abuse!"); }

		printf("\n\n");
	}

	while (b < 1)
	{
		printf("\n");
		printf("What another question ! Enter Lines number (height) Y=b : ");
		scanf("%d", &b);
		printf("\n");
	}

	printf("Value Check-UP! You seem to understand the project limit :\n\n");

	printf("a = %d  b = %d  -- This square is accepted by the community of the RAM \n", a, b);
	printf("x = %d  y = %d  -- Initialising the thing that do the thing in 2 dimensions \n\n", x, y);

	printf("Here is your magic Square Pool\n\n\n");


	while (y <= b)
	{
		while (x <= a)
		{
			// x = a;

			if (x == 1 || x == a)
			{
				if (y == 1 || y == b) 		{ printf("o"); }
				else if (y != 1 || y != b) 	
				{ 
					printf("|");					
					
					while (x < a-1) { printf(" "); x++; } 
				}
				
			}			

			else if (y == 1 || y == b)
			{
				if (x != 1 || x != a)		{ printf("-"); }
			}

	

			x++;
		}

		printf("\n");

		if (y != b) {  x =1;  }
		y++;

	}	

	printf("\n\n -- TADAM!! --The game is over -- Too bad -- Insert Coin to play again --\n\n");

	return(0);
}

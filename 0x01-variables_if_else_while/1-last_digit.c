#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the last digit of a random number
 *
 * Description: Tells whether the last digit is zero, zero-five, five-nine
 *
 * Return: zero
 */
int main(void)
{
		int n;
		int lsd;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

					/*
					 * Initialize last digit variable with %
					 */

					lsd = n % 10;

					if (lsd > 5 && lsd <= 9)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
					}
					else if (lsd <= 5 && lsd > 0)
					{
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
					}
					else
					{
						printf("Last digit of %d is %d and is 0\n", n, lsd);
					}

					return (0);
}

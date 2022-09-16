#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return:no return
 */

void jack_bauer(void)
{
	int nm1 = 0;
	int nm2 = 0;
	int prod;

	while (nm1 <= 9)
	{
		while (nm2 < 9)
		{
			prod = nm1 * nm2;

			_putchar(prod);
			_putchar(',');
			_putchar(' ');

			num2++;
		}

		nm1++;
		nm2 = 0;
	}
}

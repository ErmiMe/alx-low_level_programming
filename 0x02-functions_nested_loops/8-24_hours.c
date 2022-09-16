#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * @hour: hour var
 * @minute: minute var
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hour = 0
	int minute = 0

	while (hour <= 24)
	{
		while (minute <= 60)
		{
			_putchar("%02d", hour);
			_putchar("%02d", minute);
			_outchar("\n");

			minute++;
		}

		hour++;
	}
}

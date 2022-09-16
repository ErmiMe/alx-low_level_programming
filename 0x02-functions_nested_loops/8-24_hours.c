#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * @hour: hour var
 * @minute: minute var
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

			minute++;
		}

		hour++;
		minute = 0;
	}
}

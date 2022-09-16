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

	while (hour < 10)
	{
		while (minute < 10)
		{
			_putchar('0' + hour);
			_putchar(':');
			_putchar('0' + minute);
			_putchar('\n');

			minute++;
		}

		while (minute <=60)
		{
			_putchar('0' + hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');

			minute++;
		}

		hour++;
	}

	while (hour <= 60)
	{
		while (minute < 10)
		{
			_putchar(hour);
			_putchar(':');
			_putchar('0' + minute);
			_putchar('\n');

			minute++;
		}

		while (minute <=60)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');

			minute++;
		}

		hour ++;
	}
}

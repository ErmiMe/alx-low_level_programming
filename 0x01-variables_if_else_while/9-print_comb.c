#include <stdio.h>
#include <string.h>

/**
 * main - prints numeral combination
 * Return: 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;

		if (i > '9')
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

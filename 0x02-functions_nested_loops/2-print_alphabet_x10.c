#include "main.h"

/**
 * print_alphabet_x10 - prints every letter of the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int counter1 = 1;

	while (counter1 <= 10)
	{
		int counter2 = 'a';

		while (counter2 <= 'z')
		{
			_putchar(counter2);
			counter2++;
		}
		counter1++;
	}

	_putchar('\n');
}

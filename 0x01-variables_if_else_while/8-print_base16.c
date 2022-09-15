#include <stdio.h>
#include <string.h>

/**
 * main - prints every hex numeral
 * Return: 0
 */

int main(void)
{
	int i = '1';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'A';

	while (i <= 'F')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}

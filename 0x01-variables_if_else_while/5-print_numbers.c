#include <stdio.h>

/**
 * main - lists 0-9
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}

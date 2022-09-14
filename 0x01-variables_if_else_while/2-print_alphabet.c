#include <stdio.h>

/**
 * main - prints every letter of the alphabet
 * Return: 0
 */

int main(void)
{
	int i = 92;

	while (i <= 122)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}

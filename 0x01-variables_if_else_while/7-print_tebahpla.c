#include <stdio.h>
#include <string.h>

/**
 * main - prints every letter of the alphabet
 * Return: 0
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}

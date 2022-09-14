#include <stdio.h>
#include <string.h>

/**
 * main - prints every letter of the alphabet
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}

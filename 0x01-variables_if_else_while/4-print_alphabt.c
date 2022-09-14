#include <stdio.h>
#include <string.h>

/**
 * main - prints every lowercase lettter except q and e
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		if (i == 'd' || i == 'p')
		{
			i = i + 2;
		}
		else
		{
			i++;
		}
	}

	putchar('\n');

	return (0);
}

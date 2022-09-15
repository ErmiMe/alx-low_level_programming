#include <stdio.h>
#include "main.h"
/**
 * main - prints every letter of the alphabet
 * Return: 0
 */

int main(void)
{

	/*
	 * prints every letter of te alphabet
	 *Return: 0
	 */

	void print_alphabet(void);
	{

		int i = 'a';

		while (i <= 'z')
		{
			putchar(i);
			i++;
		}

		putchar('\n');
	}

	return (0);
}

#include "main.h"

/**
 * print_last_digit - of a number
 * @n: number input
 * Return: last digit
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n);
	return (n);


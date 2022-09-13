#include <stdio.h>
/**
 * main - tells size of various var types
 * Return: zero
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	puts("Size of a char: %d", sizeof (c));
	puts("Size of an int: %d", sizeof (i));
	puts("Size of a long int: %d", sizeof (li));
	puts("Size of a long long int: %d", sizeof (lli));
	puts("Size of a float: %d", sizeof (f));
	return (0);
}

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

	printf("Size of a char: %d byte(s)\n", (int)sizeof (c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof (i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof (li));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof (lli));
	printf("Size of a float: %d byte(s)\n", (int)sizeof (f));
	return (0);
}

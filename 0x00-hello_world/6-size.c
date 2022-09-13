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

	printf("Size of a char: %d", (int)sizeof (c));
	printf("Size of an int: %d", (int)sizeof (i));
	printf("Size of a long int: %d", (int)sizeof (li));
	printf("Size of a long long int: %d", (int)sizeof (lli));
	printf("Size of a float: %d", (int)sizeof (f));
	return (0);
}

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

	put("Size of a char: %d", sizeof (c));
	put("Size of an int: %d", sizeof (i));
	put("Size of a long int: %d", sizeof (li));
	put("Size of a long long int: %d", sizeof (lli));
	put("Size of a float: %d", sizeof (f));
	return (0);
}

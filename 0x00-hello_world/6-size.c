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
	put("Size of a char: " (sizeof $c));
	put("Size of an int: " (sizeof $i));
	put("Size of a long int: " (sizeof $li));
	put("Size of a long long int: " (sizeof $lli));
	put("Size of a float: " (sizeof $f));
	return (0);
}

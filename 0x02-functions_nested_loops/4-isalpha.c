#include "main.h"

/**
 * _isalpha - checks lowercase and uppercase from input c
 * @c: char to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

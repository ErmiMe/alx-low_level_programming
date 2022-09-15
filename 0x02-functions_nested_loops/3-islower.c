#include "main.h"

/**
 * _islower - checks lowercase from input c
 * Return: 1 or 0
 */

int _islower(int c) /* int - c for char to be tested */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

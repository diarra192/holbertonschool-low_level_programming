#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 *
 * Return: void
 */
int _islower(int c)
{
	int temp;

	if (islower(c) > 0)
	{
		temp = 1;
	}
	else
	{
		temp = 0;
	}
	return (temp);
}


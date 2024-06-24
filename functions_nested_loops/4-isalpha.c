#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * diarrr
 *
 */
int _isalpha(int c)
{
	int temp;

	if (isalpha(c) > 0)
	{
		temp = 1;
	}
	else
	{
		temp = 0;
	}
	return (temp);
}


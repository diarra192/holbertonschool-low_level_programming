#include <stdio.h>
#include "main.h"
#include <ctype.h>


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


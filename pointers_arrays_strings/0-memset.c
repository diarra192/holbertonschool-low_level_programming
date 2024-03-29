#include "main.h"
/**
*_memset - The _memset() function fills
*@s:target
*@b: constant byte
*@n:number of byte
*Return: string.
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

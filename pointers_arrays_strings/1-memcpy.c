#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: destination str
 * @src: source str
 * @n: number of bytes to copy
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;

	while (n--)
		*dest++ = *src++;
	return (s);
}

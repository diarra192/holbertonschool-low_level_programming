#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int lg = 0, i;
while (*(s + lg) != '\0')
{
lg++;
}
for (i = lg - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}

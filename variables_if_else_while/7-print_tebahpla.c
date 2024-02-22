#include <stdio.h>
/**
 * main - main block
 * Write a program that prints all single digit
 * Return: 0
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');

return (0);
}

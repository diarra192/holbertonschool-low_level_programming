#include <stdio.h>

int main() 
{
	for (char letter = 'a'; letter <= 'z'; letter++) {
		if (letter != 'q' && letter != 'e') {
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
i}

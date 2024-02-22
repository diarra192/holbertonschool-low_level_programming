#include <stdio.h>
/*
 *main - main block 
 * Return: 0
 */
int main(void) 
{
    char letter;

    for (letter = 'a'; letter <= 'z'; ++letter) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }
    
    putchar('\n'); // Print a new line
    
    return (0);
}

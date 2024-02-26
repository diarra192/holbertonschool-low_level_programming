#include "main.h"
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
void _putchar(char c) {
    write(1, &c, 1);
}

void print_most_numbers(void) {
    int i;
    for (i = 0; i < 10; i++) {
        if (i != 2 && i != 4) {
            _putchar(i + '0'); 
        }
    }
    _putchar('\n');
}

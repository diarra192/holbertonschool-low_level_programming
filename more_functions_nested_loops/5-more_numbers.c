#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _putchar(char c) {
    putchar(c);
}

void more_numbers(void) {
    int i, j;
    for (i = 0; i <= 14; i++) {
        j = i * 10;
        _putchar((j / 10) + '0');
        _putchar((j % 10) + '0');
        _putchar(' ');
    }
    _putchar('\n');
}

int main() {
    more_numbers();
    return 0;
}


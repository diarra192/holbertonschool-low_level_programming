#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _putchar(char c) {
    write(1, &c, 1);
}

void more_numbers(void) {
    int i, j;
    for (i = 0; i < 10; i++) { // Boucle 10 fois pour chaque ligne
        for (j = 0; j <= 14; j++) { // Itérer de 0 à 14
            if (j > 9) // Si le nombre a deux chiffres
                _putchar('1'); // Imprimer le premier chiffre
            _putchar((j % 10) + '0'); // Imprimer le dernier chiffre
        }
        _putchar('\n'); // Passer à la ligne suivante
    }
}

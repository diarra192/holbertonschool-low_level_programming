#include <stdio.h>

/**
 * main - bloc principal
 * Écrit un programme qui affiche tous les chiffres uniques
 * Retourne: 0
 */
int main(void)
{
    int num;

    // Boucle pour parcourir les chiffres de 0 à 9
    for (num = 0; num <= 9; num++)
    {
        // Affiche le chiffre actuel
        putchar((num % 10) + '0');
        
        // Si le chiffre est 9, continuer à la prochaine itération (éviter la virgule et l'espace après le 9)
        if (num == 9)
            continue;
        
        // Affiche une virgule suivie d'un espace
        putchar(',');
        putchar(' ');
    }

    // Affiche une nouvelle ligne après avoir affiché tous les chiffres
    putchar('\n');

    // Retourne 0 pour indiquer que le programme s'est terminé avec succès
    return (0);
}


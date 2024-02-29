#include <stdio.h>
/**
 * main - main block
 * Return: mai
 */
void imprimerTriangle(int hauteur) {
    int ligne, colonne;

    // Boucle sur chaque ligne du triangle
    for (ligne = 1; ligne <= hauteur; ligne++) {
        // Boucle pour imprimer les espaces avant les étoiles
        for (colonne = 1; colonne <= hauteur - ligne; colonne++) {
            printf(" ");
        }
        // Boucle pour imprimer les étoiles
        for (colonne = 1; colonne <= 2 * ligne - 1; colonne++) {
            printf("*");
        }
        // Nouvelle ligne à la fin de chaque ligne du triangle
        printf("\n");
    }
}

int main() {
    int hauteur;

    printf("Entrez la hauteur du triangle : ");
    scanf("%d", &hauteur);

    imprimerTriangle(hauteur);

    return 0;
}


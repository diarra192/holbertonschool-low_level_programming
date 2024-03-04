#include <stdio.h>

char *_strchr(char *s, char c) {
    // Parcourir la chaîne de caractères jusqu'à ce qu'on atteigne la fin (\0)
    while (*s != '\0') {
        // Si le caractère courant correspond à celui recherché
        if (*s == c) {
            // Retourner un pointeur vers le caractère courant dans la chaîne
            return s;
        }
        // Passer au caractère suivant dans la chaîne
        s++;
    }
    // Si le caractère n'est pas trouvé, retourner NULL
    return NULL;
}

int main() {
    char str[] = "Bonjour";
    char c = 'n';
    // Appeler la fonction _strchr pour trouver la première occurrence de 'n' dans la chaîne
    char *result = _strchr(str, c);
    // Vérifier si le caractère a été trouvé
    if (result != NULL) {
        printf("Le caractère '%c' a été trouvé à l'index %ld dans la chaîne.\n", c, result - str);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", c);
    }
    return 0;
}


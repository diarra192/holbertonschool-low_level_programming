#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 0; i < n; i++) {
        _putchar('_');
    }
    _putchar('\n');
}

int main() {
    int n;
    printf("Entrez le nombre de fois que le caractère _ doit être imprimé : ");
    scanf("%d", &n);
    print_line(n);
    return 0;
}

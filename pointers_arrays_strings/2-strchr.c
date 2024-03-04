#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: destination str
 * @src: source str
 * @n: number of bytes to copy
 * Return: string
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand(time(NULL)); // Initialize the random number generator

    int n = rand() % (2 * RAND_MAX) - RAND_MAX; // Generate a random number between -RAND_MAX and RAND_MAX

    printf("%d\n", n); // Print the generated number

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}i

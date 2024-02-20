#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
* Return: 0
*/ 
int main(void)
{
    srand(time(0)); 

    int n = rand() % (2 * RAND_MAX) - RAND_MAX; 
    printf("%d\n", n); 

    if (n > 0)
    {
        printf("%d is positive\n");
    }
    else if (n == 0)
    {
        printf("%d is zero\n");
    }
    else
    {
        printf("%d is negative\n");
    }

    return (0);
}

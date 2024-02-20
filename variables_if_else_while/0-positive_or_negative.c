#iinclude <stdio.h>
#include <stdlib.h>
#include <time.h>

 i
int main(void)
{
    srand(time(NULL)); 

    int n = rand() % (2 * RAND_MAX) - RAND_MAX; 
    printf("%d\n", n); 

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
}

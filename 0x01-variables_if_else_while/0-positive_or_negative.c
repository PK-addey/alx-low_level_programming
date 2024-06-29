#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, assigns a random number to n and prints its sign
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  
    n = rand() - RAND_MAX / 2;

    /* Print the generated number */
    printf("%d\n", n);

    /* Determine and print the sign of the number */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}

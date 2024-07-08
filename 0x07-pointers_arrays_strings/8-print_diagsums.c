#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the diagonals of a square matrix
* @a: Pointer to the 1D array representing the square matrix
* @size: Size of the square matrix
*
* This function prints the sum of the diagonals using printf.
* Format: sum1, sum2\n
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum1, sum2);
}

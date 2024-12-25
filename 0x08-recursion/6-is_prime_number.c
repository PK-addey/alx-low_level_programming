#include "main.h"

/**
* check_factors - Helper function to check for factors.
*
* @n: The number to check.
* @i: The current factor to check.
*
* Return: 1 if no factors are found, 0 otherwise.
*/

int check_factors(int n, int i);

/**
* is_prime_number - Checks if a number is prime.
*
* @n: The number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
/* Handle edge cases */
if (n <= 1)
return (0);

/* Call helper function to check for factors */
return (check_factors(n, 2));
}

/**
* check_factors - Helper function to check for factors.
*
* @n: The number to check.
* @i: The current factor to check.
*
* Return: 1 if no factors are found, 0 otherwise.
*/

int check_factors(int n, int i)
{
/* Base case: i is greater than the square root of n */
if (i * i > n)
return (1);

/* Recursive case: check if i is a factor of n */
if (n % i == 0)
return (0);

/* Recursive case: check the next factor */
return (check_factors(n, i + 1));
}

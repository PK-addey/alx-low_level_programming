#include "main.h"

/**
* find_sqrt - Helper function to find the square root.
*
* @n: The input number.
* @i: The current guess.
*
* Return: The natural square root of the input number,
* or -1 if it does not exist.
*/

int find_sqrt(int n, int i);

/**
* _sqrt_recursion - Returns the natural square root of a number.
*
* @n: The input number.
*
* Return: The natural square root of the input number,
* or -1 if it does not exist.
*/

int _sqrt_recursion(int n)
{
/* Base case: n is 0 or 1 */
if (n == 0 || n == 1)
return (n);

/* Handle error case: n is negative */
if (n < 0)
return (-1);

/* Recursive case: find the square root */
return (find_sqrt(n, 1));
}

/**
* find_sqrt - Helper function to find the square root.
*
* @n: The input number.
* @i: The current guess.
*
* Return: The natural square root of the input number,
* or -1 if it does not exist.
*/

int find_sqrt(int n, int i)
{
/* Base case: i * i is equal to n */
if (i * i == n)
return (i);

/* Base case: i * i is greater than n */
if (i * i > n)
return (-1);

/* Recursive case: try the next guess */
return (find_sqrt(n, i + 1));
}

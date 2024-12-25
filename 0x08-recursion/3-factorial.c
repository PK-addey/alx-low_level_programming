#include "main.h"

/**
* factorial - Returns the factorial of a given number.
*
* @n: The input number.
*
* Return: The factorial of the input number, or -1 if the input is negative.
*/

int factorial(int n)
{
/* Handle error case: n is negative */
if (n < 0)
return (-1);

/* Base case: n is 0 or 1 */
if (n == 0 || n == 1)
return (1);

/* Recursive case: n is greater than 1 */
return (n * factorial(n - 1));
}

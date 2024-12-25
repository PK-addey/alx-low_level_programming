#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
*
* @x: The base number.
* @y: The exponent.
*
* Return: The result of x raised to the power of y, or -1 if y is negative.
*/

int _pow_recursion(int x, int y)
{
/* Handle error case: y is negative */
if (y < 0)
return (-1);

/* Base case: y is 0 */
if (y == 0)
return (1);

/* Recursive case: y is greater than 0 */
return (x * _pow_recursion(x, y - 1));
}

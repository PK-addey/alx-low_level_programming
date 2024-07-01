#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string
* Return: Converted integer
*/

int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else if (*s == '+')
{
sign *= 1;
}
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else if (num > 0)
{
break;
}
s++;
}

return (sign * num);
}

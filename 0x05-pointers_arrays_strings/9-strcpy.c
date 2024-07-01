#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string
* Return: Converted integer
*/
int _atoi(char *s)
{
int sign = 1; /* Initialize sign as positive*/
int result = 0;
int i = 0;

/* Skip whitespace characters*/
while (s[i] == ' ')
{
i++;
}

/* Check for sign*/
if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign = -1; /* Update sign if negative*/
}
i++; /* Move to the next character after sign*/
}

/* Process digits and convert to integer*/
while (s[i] >= '0' && s[i] <= '9')
{
/*Check for overflow before updating result*/
if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
/* Handle overflow*/
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}

/* Update result*/
result = result * 10 + (s[i] - '0');
i++;
}

return (sign * result);
}

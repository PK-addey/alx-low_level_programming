#include <stdlib.h>
#include "main.h"

/**
* _putchar - Writes a character to stdout
* @c: The character to write
*
* Return: On success, 1. On error, -1.
*/
int _putchar(char c);

/**
* is_digit - Checks if a string contains only digits
* @str: The string to check
*
* Return: 1 if the string contains only digits, 0 otherwise
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* _strlen - Returns the length of a string
* @str: The string
*
* Return: The length of the string
*/
int _strlen(char *str)
{
int len = 0;

while (str[len])
len++;
return (len);
}

/**
* print_error - Prints "Error" and exits with status 98
*/
void print_error(void)
{
char *error = "Error\n";

while (*error)
_putchar(*error++);
exit(98);
}

/**
* print_result - Prints the result array as a number
* @result: The result array
* @size: The size of the result array
*/
void print_result(int *result, int size)
{
int i = 0, started = 0;

while (i < size)
{
if (result[i] != 0)
started = 1;
if (started)
_putchar(result[i] + '0');
i++;
}
if (!started)
_putchar('0');
_putchar('\n');
}

/**
* main - Multiplies two positive numbers
* @argc: The number of arguments
* @argv: The array of arguments
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, i, j, carry, n1, n2, *result;

if (argc != 3)
print_error();

num1 = argv[1], num2 = argv[2];
if (!is_digit(num1) || !is_digit(num2))
print_error();

len1 = _strlen(num1), len2 = _strlen(num2);
result = calloc(len1 + len2, sizeof(int));
if (!result)
return (1);

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0', carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
carry += result[i + j + 1] + (n1 *n2);
result[i + j + 1] = carry % 10;
carry /= 10;
}
result[i + j + 1] += carry;
}

print_result(result, len1 + len2);
free(result);
return (0);
}


#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints anything.
* @format: A string containing the types of arguments to print.
* @...: A variable number of arguments to print.
*
* Return: None
*/
void print_all(const char * const format, ...)
{
va_list args;
const char *fmt = format;
int first = 1;

va_start(args, format);

while (fmt != NULL && *fmt != '\0')
{
if (first)
{
first = 0;
}
if (!first)
{
printf(", ");
}

switch (*fmt)
{
case 'c':
printf("%c", (char) va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (double) va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);

printf("%s", str ? str : "(nil)");
break;
}
default:
break;
}

fmt++;
}

printf("\n");

va_end(args);
}

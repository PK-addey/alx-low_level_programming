#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(quote, strlen(quote), 1, stderr);
return (1);
}

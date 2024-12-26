#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
*
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1;
char *ptr;

while (i < argc)
{
for (ptr = argv[i]; *ptr != '\0'; ptr++)
{
if (*ptr < '0' || *ptr > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
i++;
}

printf("%d\n", sum);

return (0);
}

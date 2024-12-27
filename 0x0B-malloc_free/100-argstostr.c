#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program
* into a single string
* @ac: The number of arguments
* @av: Array of argument strings
*
* Return: Pointer to the concatenated string, or NULL
* if ac == 0, av == NULL, or memory allocation fails
*/
char *argstostr(int ac, char **av)
{
char *result;
int i, j, length = 0, position = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
length++;
length++;
}

result = malloc((length + 1) * sizeof(char));
if (result == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[position++] = av[i][j];
}
result[position++] = '\n';
}
result[position] = '\0';

return (result);
}


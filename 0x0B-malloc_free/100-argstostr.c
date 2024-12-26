#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* argstostr - Concatenates all the arguments of your program.
*
* @ac: The number of arguments.
* @av: The array of arguments.
*
* Return: A pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
int i, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
len += strlen(av[i]) + 1;

str = malloc(len *sizeof(char));
if (str == NULL)
return (NULL);

str[0] = '\0';
for (i = 0; i < ac; i++)
{
strcat(str, av[i]);
strcat(str, "\n");
}

return (str);
}

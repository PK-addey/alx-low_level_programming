#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* count_words - Counts the number of words in a string.
*
* @str: The string to count words from.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
int words = 0, len;
int i;

len = strlen(str);
for (i = 0; i < len; i++)
{
if (i == 0 && str[i] != ' ')
words++;
else if (str[i] != ' ' && str[i - 1] == ' ')
words++;
}
return (words);
}

/**
* strtow - Splits a string into words.
*
* @str: The string to be split.
*
* Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
int words = count_words(str);
char **array = malloc((words + 1) * sizeof(char *));
int i = 0, start = 0, j = 0;

if (array == NULL)
return (NULL);

while (i < (int)strlen(str))
{
if (str[i] == ' ' || str[i] == '\0')
{
if (i > start)
{
array[j] = malloc((i - start + 1) * sizeof(char));
if (array[j] == NULL)
{
for (j--; j >= 0; j--)
free(array[j]);
free(array);
return (NULL);
}
strncpy(array[j], str + start, i - start);
array[j][i - start] = '\0';
j++;
}
start = i + 1;
}
i++;
}
array[j] = NULL;
return (array);
}

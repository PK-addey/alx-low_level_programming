#include <stdio.h>

/**
* leet - Encodes a string into 1337 (leet speak).
* @str: The string to be encoded.
*
* Return: Pointer to the encoded string.
*/

char *leet(char *str)
{
char *ptr = str;
char leet_map[256] = {0};

leet_map[(unsigned char)'a'] = leet_map[(unsigned char)'A'] = '4';
leet_map[(unsigned char)'e'] = leet_map[(unsigned char)'E'] = '3';
leet_map[(unsigned char)'o'] = leet_map[(unsigned char)'O'] = '0';
leet_map[(unsigned char)'t'] = leet_map[(unsigned char)'T'] = '7';
leet_map[(unsigned char)'l'] = leet_map[(unsigned char)'L'] = '1';

while (*ptr)
{
if (leet_map[(unsigned char)*ptr])
*ptr = leet_map[(unsigned char)*ptr];
ptr++;
}

return (str);
}

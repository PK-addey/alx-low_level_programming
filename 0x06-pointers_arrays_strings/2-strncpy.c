#include "main.h"
/**
* _strncpy - Copies n bytes of src to dest, including null bytes.
* @dest: The destination buffer to copy to.
* @src: The source buffer to copy from.
* @n: The maximum number of bytes to copy from src.
*
* Return: Pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return(dest);
}

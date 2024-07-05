#include <stdio.h>

/**
* rot13 - encodes a string using rot13
* @s: the string to encode
*
* Return: the encoded string
*/
char *rot13(char *s)
{
char *p = s;
char current;
int i;

while (*p)
{
current = *p;
if ((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
{
for (i = 0; i < 13; i++)
{
if (current == 'z')
{
current = 'a';
}
else if (current == 'Z')
{
current = 'A';
}
else
{
current++;
}
}
}
*p = current;
p++;
}
return (s);
}

int main(void)
{
char str[] = "Hello, World!";

printf("%s\n", rot13(str));
return (0);
}

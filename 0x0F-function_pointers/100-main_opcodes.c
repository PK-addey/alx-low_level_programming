#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i, num_bytes;
unsigned char *opcode_ptr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

opcode_ptr = (unsigned char *)&main;
for (i = 0; i < num_bytes && i < 100; i++)
{
printf("%02x", opcode_ptr[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}

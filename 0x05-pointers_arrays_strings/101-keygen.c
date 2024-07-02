#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random valid password for 101-crackme
* Return: 0 on success
*/
int main(void)
{
int sum = 0;
char password[100];
int i = 0;

srand(time(0));

while (sum < 2645)  /**
* Adjusting the threshold to leave
* room for the final character(s)
*/
{
password[i] = rand() % 94 + 33;  /* Generates a random character between '!' (33) and '~' (126)*/
sum += password[i];
putchar(password[i]);
i++;
}

/* Adjust the last character to make the sum equal to 2772 */
password[i] = 2772 - sum;
putchar(password[i]);
password[i + 1] = '\0'; /* Null-terminate the string */

return (0);
}

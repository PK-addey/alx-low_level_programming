#include "main.h"

/**
* length - Helper function to get the length of a string.
*
* @s: The string to get the length of.
*
* Return: The length of the string.
*/

int length(char *s);

/**
* check_palindrome - Helper function to check if a string is palindrome.
*
* @s: The string to check.
* @start: The starting index of the current substring.
* @end: The ending index of the current substring.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/

int check_palindrome(char *s, int start, int end);

/**
* is_palindrome - Checks if a string is a palindrome.
*
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/

int is_palindrome(char *s)
{
return (check_palindrome(s, 0, length(s)));
}

/**
* length - Helper function to get the length of a string.
*
* @s: The string to get the length of.
*
* Return: The length of the string.
*/

int length(char *s)
{
if (*s == '\0')
return (0);
return (1 + length(s + 1));
}

/**
* check_palindrome - Helper function to check if a string is palindrome.
*
* @s: The string to check.
* @start: The starting index of the current substring.
* @end: The ending index of the current substring.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/

int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end - 1])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

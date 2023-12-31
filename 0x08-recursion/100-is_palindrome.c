#include "main.h"
#include <string.h>
/**
* is_palindrome_helper - Helper function to check if a string is a palindrome.
* @s: The string to check.
* @start: The starting index of the string.
* @end: The ending index of the string.
*
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1); /* Base case: The string is a palindrome. */
if (s[start] != s[end])
return (0); /* The characters don't match, not a palindrome. */
/* Recursively check the next pair of characters. */
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}

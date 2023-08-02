#include "main.h"
/**
* wildcmp - Compares two strings and returns 1 if they can be considered
*            identical, otherwise returns 0.
* @s1: The first string to compare.
* @s2: The second string to compare.
*
* Return: 1 if strings can be considered identical, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
{
return (*s1 == '\0'); /* If both strings are at the end, they are identical. */
}
if (*s2 == '*')
{
/* Skip consecutive '*' characters in the second string. */
while (*(s2 + 1) == '*')
{
s2++;
}
/* If '*' is the last character in the second string, it can match anything. */
if (*(s2 + 1) == '\0')
{
return (1);
}
/* Recursively check all possible matches of '*' and next characters in s1. */
while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
{
return (1); /* Match found. */
}
s1++;
}
return (0); /* No match found for '*', return 0. */
}
/* If characters don't match, strings are not identical. */
if (*s1 != *s2)
{
return (0);
}
/* Recursively check the next characters in both strings. */
return (wildcmp(s1 + 1, s2 + 1));
}

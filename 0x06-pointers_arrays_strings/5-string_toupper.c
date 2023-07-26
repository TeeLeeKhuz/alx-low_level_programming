#include "main.h"
/**
* string_toupper - Changes all lowercase letters to uppercase.
* @str: Pointer to the input string.
*
* Return: Pointer to the modified string.
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}
return (ptr);
}
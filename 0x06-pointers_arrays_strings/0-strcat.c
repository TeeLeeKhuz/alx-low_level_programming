#include "main.h"
/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string to be appended to dest.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end)
dest_end++;
while (*src)
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return (dest);
}

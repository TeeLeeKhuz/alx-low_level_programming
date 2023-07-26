#include "main.h"
/**
* _strncat - Concatenates two strings up to n bytes from src.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string to be appended to dest.
* @n: Maximum number of bytes to append from src.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end)
dest_end++;
while (*src && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}

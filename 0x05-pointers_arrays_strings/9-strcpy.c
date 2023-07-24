#include "main.h"
/**
* _strcpy - Copies string pointed to by src to the buffer pointed to by dest
*
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string to be copied.
*
* Return: Pointer to dest (the destination buffer).
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
/* Copy characters one by one until the null terminator is encountered */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
/* Copy the null terminator '\0' */
dest[i] = '\0';
/* Return the pointer to the destination buffer */
return (dest);
}

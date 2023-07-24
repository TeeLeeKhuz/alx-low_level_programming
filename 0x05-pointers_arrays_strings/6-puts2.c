#include "main.h"
/**
* puts2 - Prints every other character of string, starting with first character
*
* @str: Pointer to the string to be printed.
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
/* Print the character if the index is even (every other character) */
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}

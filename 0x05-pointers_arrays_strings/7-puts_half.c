#include "main.h"
/**
* _strlen - Calculates the length of a string.
*
* @s: Pointer to the string to be measured.
* Return: Length of the string.
*/
int _strlen(char *s);
/**
* puts_half - Prints half of a string, followed by a new line.
*
* @str: Pointer to the string to be printed.
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start_index = (length + 1) / 2; 
/* Calculate the start index for the second half 
*/
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
/**
* _strlen - Calculates the length of a string.
*
* @s: Pointer to the string to be measured.
* Return: Length of the string.
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}

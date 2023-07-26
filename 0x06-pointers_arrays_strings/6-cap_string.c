#include "main.h"
#include <stdbool.h>
/**
* is_separator - Check if a character is a word separator.
* @ch: The character to check.
*
* Return: true if the character is a separator, false otherwise.
*/
bool is_separator(char ch)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (ch == separators[i])
return (true);
}
return (false);
}
char *cap_string(char *str)
{
int i;
if (str[0] >= 'a' && str[0] <= 'z')
str[0] = str[0] - ('a' - 'A');
for (i = 1; str[i] != '\0'; i++)
{
if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
str[i] = str[i] - ('a' - 'A');
}
return (str);
}

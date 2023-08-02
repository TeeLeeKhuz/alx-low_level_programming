#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse using recursion.
* @s: Pointer to the string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: If we reach the end of the string (null terminator), return. */
return;
_print_rev_recursion(s + 1); /* Recursively call the function with the next character in the string. */
_putchar(*s); /* Print the current character after all the recursive calls have been executed. */
}

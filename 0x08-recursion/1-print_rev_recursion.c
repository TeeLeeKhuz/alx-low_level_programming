#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse using recursion.
* @s: Pointer to the string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Reach the end of the string (null terminator), return */
return;
_print_rev_recursion(s + 1); /* Recursively call the function in the string */
_putchar(*s); /* Print character after recursive calls have been executed */
}

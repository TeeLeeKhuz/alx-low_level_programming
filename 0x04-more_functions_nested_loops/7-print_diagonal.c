#include "main.h"
/**
* print_diagonal - Draws a diagonal line using the '\' character in the terminal.
*
* @n: The number of times the character '\' should be printed.
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}

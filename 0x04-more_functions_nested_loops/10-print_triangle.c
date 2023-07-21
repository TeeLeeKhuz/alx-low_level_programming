#include "main.h"
#include <stdio.h>
/**
* print_triangle - Prints a triangle using the '#' character in the terminal.
*
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

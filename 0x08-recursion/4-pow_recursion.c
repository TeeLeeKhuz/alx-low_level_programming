#include "main.h"
/**
* _pow_recursion - Calculates the value of x raised to the power of y.
* @x: The base value.
* @y: The exponent value.
*
* Return: The result of x raised power of y. If y is lower than 0, return -1.
*/
int _pow_recursion(int x, int y)
{
/* Error condition: If y is lower than 0, return -1. */
if (y < 0)
return (-1);
/* Base case: If y is 0, return 1 (any number raised to the power of 0 is 1). */
if (y == 0)
return (1);
/* Recursively call the function to calculate the power. */
return (x * _pow_recursion(x, y - 1));
}

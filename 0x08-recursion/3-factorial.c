#include "main.h"
/**
* factorial - Calculates the factorial of a given number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of n. If n is lower than 0, return -1.
*/
int factorial(int n)
{
/* Error condition: If n is lower than 0, return -1. */
if (n < 0)
return (-1);
/* Base case: Factorial of 0 is 1. */
if (n == 0)
return (1);
/* Recursively call the function to calculate factorial. */
return (n * factorial(n - 1));
}

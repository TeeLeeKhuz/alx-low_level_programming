#include "main.h"
#include <stdio.h>
int _putchar(char c);
/**
* print_last_digit - Prints the last digit of a number.
* @n: The number.
*
* Return: The value of the last digit.
*/
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
last_digit = -n % 10;
else
last_digit = n % 10;
_putchar('0' + last_digit);
return last_digit;
}
int _putchar(char c)
{
return putchar(c);
}

#include <stdio.h>
/**
* fizz_buzz - Fizz-Buzz test function.
*
* Description: Prints the numbers from 1 to 100, replacing multiples of three
* with "Fizz", multiples of five with "Buzz", and multiples of both with "FizzBuzz".
* Each number or word is separated by a space, and a new line is printed at the end.
*/
void fizz_buzz(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", num);
}
if (num < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
}

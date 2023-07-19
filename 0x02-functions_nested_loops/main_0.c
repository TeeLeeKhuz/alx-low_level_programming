#include "main.h"
#include <stdio.h>
int _putchar(char c);
int main(void)
{
int r;
r = print_last_digit(98);
printf("%d\n", r);
r = print_last_digit(0);
printf("%d\n", r);
r = print_last_digit(-1024);
printf("%d\n", r);
return (0);
}
int _putchar(char c)
{
return putchar(c);
}

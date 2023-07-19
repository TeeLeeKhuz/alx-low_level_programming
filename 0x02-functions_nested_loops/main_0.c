#include "main.h"
#include <stdio.h>
int main(void)
{
int r;
r = print_last_digit(98);
putchar('0' + r);
putchar('\n');
r = print_last_digit(0);
putchar('0' + r);
putchar('\n');
r = print_last_digit(-1024);
putchar('0' + r);
putchar('\n');
return (0);
}

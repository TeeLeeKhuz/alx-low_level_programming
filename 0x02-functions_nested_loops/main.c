#include <stdio.h>
#include "main.h"
int main(void)
{
int r;
r = print_sign(98);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0xff);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(-1);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
}

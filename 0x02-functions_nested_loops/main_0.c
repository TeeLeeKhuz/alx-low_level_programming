#include "main.h"
#include <unistd.h>
#include <limits.h>
int main(void)
{
int r;
r = print_last_digit(98);
char digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
r = print_last_digit(0);
digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
r = print_last_digit(-1024);
digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
r = print_last_digit(INT_MAX);
digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
r = print_last_digit(INT_MIN);
digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
r = print_last_digit(1);
digit = '0' + r;
write(1, &digit, 1);
write(1, "\n", 1);
return (0);
}

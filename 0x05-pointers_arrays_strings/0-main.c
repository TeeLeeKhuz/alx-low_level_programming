#include <stdio.h>
#include "main.h"
int main(void)
{
int n = 402;
printf("n = %d\n", n);
reset_to_98(&n);
printf("n = %d\n", n);
return (0);
}

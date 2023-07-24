#include <stdio.h>
#include "main.h"
int main(void)
{
char *str = "My first strlen!";
int len;
len = _strlen(str);
printf("%d\n", len);
return (0);
}

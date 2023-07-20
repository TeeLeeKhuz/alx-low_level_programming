#include "1-main.h"  /* Include the appropriate header file that contains the _isdigit function */
#include <stdio.h>
/**
* main - Check the _isdigit function.
*
* Return: Always 0.
*/
int main(void)
{
char c;
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = '5';
printf("%c: %d\n", c, _isdigit(c));
c = '9';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}

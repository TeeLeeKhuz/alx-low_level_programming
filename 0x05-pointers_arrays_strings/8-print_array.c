#include "main.h"
#include <stdio.h>
/**
* print_array - Prints n elements of array of integers, followed by a new line
*
* @a: Pointer to the array of integers to be printed.
* @n: Number of elements of the array to be printed.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
/* Print comma and space after all elements except the last one */
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

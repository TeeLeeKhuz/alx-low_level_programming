#include <stdio.h>

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p = a;

    printf("Value of p: %p\n", p);
    *(p + 5) = 98; /* Add this line */
    printf("a[2] = %d\n", a[2]);
    return (0);
}

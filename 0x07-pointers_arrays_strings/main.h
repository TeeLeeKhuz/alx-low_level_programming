#ifndef MAIN_H
#define MAIN_H
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
/**
* _memset - fills the first n bytes of the memory area pointed to by s
*           with the constant byte b
* @s: Pointer to the memory area
* @b: Constant byte to be filled
* @n: Number of bytes to be filled
*
* Return: Pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n);
/* Add other function prototypes here if needed */
#endif /* MAIN_H */

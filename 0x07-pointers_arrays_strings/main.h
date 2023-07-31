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
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: Pointer to the destination memory area
* @src: Pointer to the source memory area
* @n: Number of bytes to copy
*
 Return: Pointer to the destination memory area (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n);
/**
* _strchr - locates a character in a string
* @s: The string to search
* @c: The character to find
*
* Return: Pointer to the first occurrence of the character c in the string s,
*         or NULL if the character is not found
*/
char *_strchr(char *s, char c);
/* Add other function prototypes here if needed */
#endif /* MAIN_H */

#ifndef MAIN_H
#define MAIN_H
/* _putchar - writes the character c to stdout */
int _putchar(char c);
/* 0. Function that concatenates two strings */
char *_strcat(char *dest, char *src);
/* 1. Function that concatenates two strings using at most n bytes from src */
char *_strncat(char *dest, char *src, int n);
/* 2. Function that copies a string */
char *_strncpy(char *dest, char *src, int n);
/* 3. Function that compares two strings */
int _strcmp(char *s1, char *s2);
/* 4. Function that reverses the content of an array of integers */
void reverse_array(int *a, int n);
/* 5. Function that changes all lowercase letters of a string to uppercase */
char *string_toupper(char *str);
/* 6. Function that capitalizes all words of a string */
char *cap_string(char *str);
/* 7. Function that encodes a string into 1337 */
char *leet(char *str);
/* 100. Function that encodes a string using rot13 */
char *rot13(char *str);
/* 101. Function that prints an integer */
void print_number(int n);
/* 102. Function that adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/* 103. Function that prints a buffer */
void print_buffer(char *buffer, int size);
#endif /* MAIN_H */

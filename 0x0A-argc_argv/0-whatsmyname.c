#include <stdio.h>
int main(int argc, char *argv[])
{
/* The main function receives two parameters: argc (argument count) and argv (argument vector)
argc is the number of command-line arguments, and argv is an array of strings containing the arguments */
if (argc > 0)
{
/* Check if argc is greater than 0 to ensure that at least one argument (program name) is present */
printf("%s\n", argv[0]);
/* Print the first argument in argv, which is the program name, followed by a newline character */
}
return (0);
/* Indicate successful execution by returning 0 to the operating system */
}

#include "main.h"
/**
* is_prime_helper - Helper function to check if a number is prime.
* @n: The number to check if prime.
* @i: The current divisor to check.
*
* Return: 1 if prime, 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0); /* 1 and numbers less than 1 are not prime. */
if (i * i > n)
return (1); /* If no smaller divisor is found, n is prime. */
if (n % i == 0)
return (0); /* If n is divisible by any smaller number, it's not prime. */
return (is_prime_helper(n, i + 1)); /* Recursively check for other divisors. */
}
/**
* is_prime_number - Returns 1 if the input integer is a prime number,
*                   otherwise returns 0.
* @n: The input integer to check.
*
* Return: 1 if prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2)); /* Start checking from divisor 2. */
}

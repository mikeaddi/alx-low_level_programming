#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - is an integer a prime number?
 * @n: number present
 *
 * Return: to 1 if n is prime number and to 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a primee number is in recursion
 * @n: number present
 * @j: iterator
 *
 * Return: to 1 if n is prime number and to 0 if its not
 */

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}

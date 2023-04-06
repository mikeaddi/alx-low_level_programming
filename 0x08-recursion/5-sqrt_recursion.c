#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number for the square root
 *
 * Return: to the result of the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to find the square rooot of a number
 * @n: number to calulate the square root
 * @j: iterator
 *
 * Return: to the result of the square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}

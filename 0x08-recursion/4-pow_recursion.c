#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 * @x: value of
 * @y: power of
 *
 * Return: result of the value raised by the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

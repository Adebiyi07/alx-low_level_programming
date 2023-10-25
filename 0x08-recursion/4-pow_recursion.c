#include "main.h"

/**
 * _pow_recursion - function to return value of x raised to y
 * @x: base number parameter
 * @y: power parameter
 * Return: return result of raising to power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

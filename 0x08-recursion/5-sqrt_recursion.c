#include "main.h"

/**
 * _sqrt_recursion - program to return natural sqrt
 * @n: number parameter
 * Return: return the sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - function to return natural sqrt
 * @n: number parameter
 * @i: increment parameter
 * Return: returns sqrt
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

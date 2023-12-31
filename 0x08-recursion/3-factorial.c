#include "main.h"

/**
 * factorial - fucntion to return factorial of a given number
 * @n: number parameter
 * Return: return factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

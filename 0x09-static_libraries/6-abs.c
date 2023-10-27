#include "main.h"

/**
 * _abs - function to get absolute value
 *
 * @a: parameter for the function
 *
 * Return: returns 0
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}

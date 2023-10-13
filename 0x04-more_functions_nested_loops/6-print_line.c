#include "main.h"

/**
 * print_line - function to print a straight line
 *
 * @n: number of times to print _
 * Return: returns 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}

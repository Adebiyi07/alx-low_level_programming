#include "main.h"

/**
 * print_square - program to print squaresusing #
 *
 * @size: parameter for size of square
 *
 * Return: returns 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * more_numbers(void) - function to print
 *
 * Return: returns 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}

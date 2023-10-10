#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return:  returns 0 after running
 */

void print_alphabet_x10(void)
{
	int m;
	char n;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
}


#include "main.h"


/**
 * print_in_binary - print num in binary
 * @n: number in decimal
 * Return: 0
 */

void print_in_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_in_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints binary representation of a number
 * @n: number to convert to binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_in_binary(n);
	}
}

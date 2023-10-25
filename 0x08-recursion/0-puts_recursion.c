#include "main.h"

/**
 * _puts_recursion - function to print a string
 * @s: string parameter
 * Return: returns 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

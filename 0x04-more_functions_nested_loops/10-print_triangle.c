#include "main.h"

/**
 * print_triangle - fucntion to print triangles using #
 *
 * @size: parameter for size of triangle
 *
 * Return: returns 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	if (j < size - (i + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}

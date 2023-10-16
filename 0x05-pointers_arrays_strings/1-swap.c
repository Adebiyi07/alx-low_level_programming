#include "main.h"

/**
 * swap_int - function to swap values of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

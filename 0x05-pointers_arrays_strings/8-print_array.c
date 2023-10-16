#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elements from array
 * @a: array parameter
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

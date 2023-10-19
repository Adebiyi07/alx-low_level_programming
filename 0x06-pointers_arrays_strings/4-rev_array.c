#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: pointer to the array
 * @n: the size of the array
 * Return: returns the reversed array
 */

void reverse_array(int *a, int n)
{
	int i, revarray;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		revarray = a[i];
		a[i] = a[n];
		a[n] = revarray;
		n--;
	}
}

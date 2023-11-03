#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: size parameter
 * Return: returns new pointer
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}

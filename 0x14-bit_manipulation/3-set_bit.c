#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to bit
 * @index: index of bit
 * Return: 1 if success, 0 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	val = 1;
	val = val << index;
	*n = ((*n) | val);
	return (1);
}

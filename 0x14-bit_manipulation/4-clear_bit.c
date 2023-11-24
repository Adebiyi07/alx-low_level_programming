#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}


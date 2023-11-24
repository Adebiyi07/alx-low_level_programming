#include "main.h"

/**
 * flip_bits - return number of bits needed to flip
 * to get to another number
 * @n: pointer to first number
 * @m: pointer to second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}

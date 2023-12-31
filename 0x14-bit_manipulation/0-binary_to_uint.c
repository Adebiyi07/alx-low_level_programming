#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to binary character
 *
 * Return: converted character or 0 if non binaary char
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num = num + 1;
	}
	return (num);
}

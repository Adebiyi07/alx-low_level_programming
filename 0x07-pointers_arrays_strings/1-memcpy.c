#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @src: area to copy from
 * @dest: area to copy to
 * @n: number of bytes
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}

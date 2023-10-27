#include "main.h"

/**
 * _memset - function to fill memory with constant byte
 * @n: number of bytes
 * @s: positions to fill
 * @b: byte
 * Return: returns filled locations
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

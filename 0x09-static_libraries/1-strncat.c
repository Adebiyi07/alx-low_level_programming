#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - fucntion that concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 * Return: final string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{

	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}

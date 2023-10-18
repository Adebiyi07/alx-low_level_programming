#include "main.h"
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
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = src[i];
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}

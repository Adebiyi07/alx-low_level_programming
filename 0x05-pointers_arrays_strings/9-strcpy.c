#include "main.h"

/**
 * _strcpy - function to copy string
 * @src: source to copy string from
 * @dest: destination to put string
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


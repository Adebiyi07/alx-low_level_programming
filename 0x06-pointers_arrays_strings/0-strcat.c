#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 * @src: the source string
 * @dest: the destination string
 * Return: returns the new concatenatd string
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlength++;
	for (i = 0; src[i] != '\0'; i++)
		srclength++;
	for (i = 0; i <= srclength; i++)
		dest[destlength + i] = src[i];
	return (dest);
}

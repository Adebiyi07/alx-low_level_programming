#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: big string parameter
 * @needle: substring that fits
 * Return: returns 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != 0 '\0'; haystack++)
	{
		char *P = needle;
		char *I = haystack;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}
	}
	if (*P == '\0')
	return (haystack);
}

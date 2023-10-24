#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string
 * @accept: pareameter
 * Return: returns 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
				return (s + m);
		}
	}
	return (0);
}

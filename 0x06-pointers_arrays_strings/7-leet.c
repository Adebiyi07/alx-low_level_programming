#include "main.h"

/**
 * leet - function to encode a string
 * @str: string to encode
 * Return: return the encoded string
 */

char *leet(char *str)
{
	int i;
	int j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);

}

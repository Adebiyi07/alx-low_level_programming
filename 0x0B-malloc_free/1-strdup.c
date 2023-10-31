#include "main.h"

/**
 * _strdup - function to return pointer to
 * newly allocated space in memory which contains
 * copy of a given string as parameter
 * @str: string parameter
 * Return: returns pointer to str
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}

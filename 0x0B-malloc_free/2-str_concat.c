#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: returns the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int count, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = count = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[count] != '\0')
		count++;
	concat = malloc(sizeof(char) * (i + count + 1));
	if (concat == NULL)
		return (NULL);
	i = count = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[count] != '\0')
	{
		concat[i] = s2[count];
		i++;
		count++;
	}
	concat[i] = '\0';
	return (concat);
}

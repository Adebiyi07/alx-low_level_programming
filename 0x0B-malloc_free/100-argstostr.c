#include "main.h"

/**
 * argstostr - function to concatenate args
 * @ac: parameter
 * @av: parameter
 * Return: returns 0
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int r = 0;
	char *str;
	int I = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			I++;
	}
	I += ac;
	str = malloc(sizeof(char) * I + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

#include "main.h"

/**
 * _isalpha - checks if letter is upper or lower case
 *
 * @c: the parameter for the function
 *
 * Return: returns either 1 or 0 when run
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

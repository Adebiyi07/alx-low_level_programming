#include "main.h"

/**
 * _islower - contains the program to check lower case
 *
 *@c: checking value
 *
 * Return: returns 0 when program is run
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

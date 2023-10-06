#include <stdio.h>

/**
 * main - contains the entire code
 *
 * Return: returns 0 when the program is run
 */

int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
		putchar(j);
	putchar('\n');
	return (0);
}

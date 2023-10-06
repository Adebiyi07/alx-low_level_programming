#include <stdio.h>

/**
 * main - contains the entire program
 *
 * Return: returns 0 when the program has run
 */

int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - contains the entire program
 * Return: returns 0 when the program has run
 */

int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		putchar(j);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

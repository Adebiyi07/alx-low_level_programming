#include <stdio.h>

/**
 * main - contains the entire program
 *
 * Return: returns 0 when the program has run
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

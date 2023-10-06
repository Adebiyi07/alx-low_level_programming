#include <stdio.h>

/**
 * main - contains the entire program
 *
 * Return: returns 0 when the program is run
 */

int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		putchar(j + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

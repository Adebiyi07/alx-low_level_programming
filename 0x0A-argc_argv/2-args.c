#include "main.h"

/**
 * main - function to print all received arguments
 * @argc: arguments
 * @argv: array
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}

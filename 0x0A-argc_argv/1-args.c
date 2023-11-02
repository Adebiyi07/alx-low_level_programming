#include "main.h"

/**
 * main - function to print no of args passed
 * @argc: argument parameter
 * @argv: array number
 * Return: return 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

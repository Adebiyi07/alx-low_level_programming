#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if file is opened
 * @file_origin: file to copy from
 * @file_dest: file to paste into
 * Return:  0
 */

void error_file(int file_origin, int file_dest, char *argv[])
{
	if (file_origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - copy from file to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_origin, file_dest, err_close;
	ssize_t numchars, numwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_origin file_dest");
		exit(97);
	}
	file_origin = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_origin, file_dest, argv);

	numchars =  1024;
	while (numchars == 1024)
	{
		numchars = read(file_origin, buffer, 1024);
		if (numchars == -1)
			error_file(-1, 0, argv);
		numwrite = write(file_dest, buffer, numchars);
				if (numwrite == -1)
				error_file(0, -1, argv);
	}
	err_close = close(file_origin);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_origin);
		exit(100);
	}
	err_close = close(file_dest);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
	return (0);
}

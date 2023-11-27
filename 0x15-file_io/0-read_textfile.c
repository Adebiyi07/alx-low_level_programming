#include "main.h"

/**
 * read_textfile - reads text file and prints it
 * to the POSIX standard output
 * @filename: name of file to read from
 * @letters: no of letters in file
 * Return: no of letters printed or 0 if null file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int textfile;
	ssize_t fileread, filewrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(textfile);
		return (0);
	}
	fileread = read(textfile, buffer, letters);
	close(textfile);
	if (fileread == -1)
	{
		free(buffer);
		return (0);
	}
	filewrite = write(STDOUT_FILENO, buffer, fileread);
	free(buffer);
	if (fileread != filewrite)
		return (0);
	return (filewrite);
}

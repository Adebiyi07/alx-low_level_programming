#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: text to be written in the file
 * Return: returns 1 on success, 0 if error
 */

int create_file(const char *filename, char *text_content)
{
	int file, numletters, writetext;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (numletters = 0; text_content[numletters]; numletters++)
		;
	writetext = write(file, text_content, numletters);
	if (writetext == -1)
		return (-1);
	close(file);
	return (1);
}

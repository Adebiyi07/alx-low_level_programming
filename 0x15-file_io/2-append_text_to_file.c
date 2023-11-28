#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file to append to
 * @text_content: content to be appended
 * Return: return 1 on success, 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, numletters, writetext;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		writetext = write(file, text_content, numletters);
		if (writetext == -1)
			return (-1);
	}
	close(file);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: pointer to filename
 * @text_content: text to be appended.
 *
 * Return: 1 on success, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, counter;
	ssize_t writer;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		counter = 0;
		while (text_content[counter])
			counter++;

		writer = write(fd, text_content, counter);
		if (writer == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

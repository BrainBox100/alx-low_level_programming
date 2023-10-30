#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: pointer to filename
 * @text_content: pointer to the text content
 *
 * Return: 1 if successful and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writer;
	int counter;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	counter = 0;
	while (text_content[counter])
		counter++;

	writer = write(fd, text_content, counter);

	if (writer == -1)
		return (-1);

	close(fd);

	return (1);
}

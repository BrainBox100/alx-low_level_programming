#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to the POSIX.
 * @filename: a pointer to the file to be read.
 * @letters: The number of letters it should read and print
 *
 * Return: number of letters it read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *b;
	size_t reader, writer;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	/** To open file **/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/** To process opened file **/
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, reader);

	/** To close opened file **/
	close(fd);

	free(b);

	return (writer);
}

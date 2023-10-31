#include "main.h"

/**
 * read_textfile - read  size and print to standardd output
 * @filename: the file to read from
 * @letters: size to read.
 *
 * Return:size read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ff;
	ssize_t n_read, n_printed;
	char *buffer;

	if (filename == NULL)
		return (0);

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(ff, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}
	n_printed = write(STDOUT_FILENO, buffer, n_read);
	if (n_printed == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}
	close(ff);
	return (n_read);
}

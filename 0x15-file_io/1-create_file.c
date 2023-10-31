#include "main.h"
#include "_strlen.c"

/**
 * create_file - creates file with a rw permissions and write into it.
 * @filename: name of a file
 *
 * @text_content: text_content to write into file
 *
 * Return: 1, -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int ff;
	int n_write;

	if (!filename)
		return (-1);

	ff = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ff == -1)
		return (-1);

	if (!text_content)
	{
		close(ff);
		return (1);
	}
	n_write = write(ff, text_content, _strlen(text_content));
	if (n_write == -1 || n_write != _strlen(text_content))
	{
		close(ff);
		return (-1);
	}
	close(ff);
	return (1);
}

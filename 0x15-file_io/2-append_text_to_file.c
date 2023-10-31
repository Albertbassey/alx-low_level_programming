#include "main.h"
#include "_strlen.c"

/**
 * append_text_to_file - append text exclusively.
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1, -1 if error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ff;
	int n_append;

	if (!filename)
		return (-1);

	ff = open(filename, O_WRONLY | O_APPEND);
	if (ff == -1)
		return (-1);

	if (!text_content)
	{
		close(ff);
		return (1);
	}

	n_append = write(ff, text_content, _strlen(text_content));
	if (n_append == -1 || n_append != _strlen(text_content))
	{
		close(ff);
		return (-1);
	}
	close(ff);
	return (1);
}

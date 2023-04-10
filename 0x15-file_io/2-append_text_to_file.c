#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success.
 * 	-1 on failure.
 * 	-1 if filename is NULL.
 * 	Do not add anything if text_content is NULL
 * 	1 if file exists
 * 	-1 if file does not exist
 * 	-1 if there is no required permission.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int newletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (newletters = 0; text_content[newletters]; newletters++)
			;

		rwr = write(fd, text_content, newletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

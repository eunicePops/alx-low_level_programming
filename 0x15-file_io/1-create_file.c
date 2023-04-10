#include "main.h"

/**
 * create_file - is a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 if it is a success.
 * 	-1 if it fails: i.e file can not be created
 * 	or  file can not be written
 * 	created file must have those permissions: rw-------
 * 	-1: if filename is NULL
 * 	empty file: if text_content is NULL 
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int newletters;
	int rwpermissions;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (newletters = 0; text_content[newletters]; newletters++)
		;

	rwpermissions = write(fd, text_content, newletters);

	if (rwpermissions == -1)
		return (-1);

	close(fd);

	return (1);
}

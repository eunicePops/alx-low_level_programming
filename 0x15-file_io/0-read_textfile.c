#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile: reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: 0 - if filename is NULL
 * 	0 - if write fails 
 * 	0 - if write does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readlen, writelen;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	readlen = read(fd, buffer, letters);
	close(fd);

	if (readlen == -1)
	{
		free(buffer);
		return (0);
	}
	writelen = write(STDOUT_FILENO, buffer, readlen);
	free(buffer);
	if (readlen != writelen)
		return (0);
	return (writelen);
}

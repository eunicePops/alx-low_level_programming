#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 *
 * src to memomy area dest
 *
 * @dest: memory area
 *
 * @src: source
 *
 * @n: length of src
 *
 * Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

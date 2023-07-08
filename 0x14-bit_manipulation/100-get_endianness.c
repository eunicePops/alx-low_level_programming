#include "main.h"

/**
 * get_endianness - this function checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *b;

	y = 1;
	b = (char *) &y;

	return ((int)*b);
}

#include "main.h"

/**
 * set_bit - this functon sets the value of a bit to 1.
 * at a given index.
 * @n: the pointer of an unsigned long int.
 * @index: represents the index of the bit.
 *
 * Return: 1 if it performed, -1 nonperformance.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	*n = (*n | b);

	return (1);
}

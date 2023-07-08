#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length, baze_two;

	if (!b)
		return (0);

	result = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, baze_two = 1; length >= 0; length--, baze_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			result += baze_two;
		}
	}

	return (result);
}

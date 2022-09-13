#include "main.h"

/**
 * print_alphabet_x10 - entrypoint
 *
 * Description: A function hat prints 10 times the alphabet, in lowercase,
 *
 * followed by a new line
 *
 * Return: Always 0
 */

int  print_alphabet_x10(void)
{
	int  i = 0, j;

	while (i < 10)
	{
		j = 0;

		char letters = 'a';

		while (letters <= 'z' || j < 10)
		{
			_putchar(letters);
			letters++;
			j++;
		}
		_putchar('\n');
		i++;
	}
}

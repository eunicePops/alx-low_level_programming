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

void print_alphabet_x10(void)
{

	char letters = 'a';
	int i = 0;

	while (i <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');

		i++;
	}
}

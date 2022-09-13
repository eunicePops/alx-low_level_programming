#include "main.h"

/**
 * main - entrypoint
 *
 * Description - Prints _putchar as a message
 *
 * Return: Always 0 on (Success)
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int counts, siz;

	siz = sizeof(str) / sizeof(int);

	for (counts = 0; counts < siz; counts++)
	{
		_putchar(str[counts]);
	}

	_putchar('\n');
	return (0);
}

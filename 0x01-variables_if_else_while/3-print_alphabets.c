#include <stdio.h>
#include <unistd.h>

/**
 * main - entrypoint
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

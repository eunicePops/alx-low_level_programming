#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a linked list
 * @h: head of the list
 *
 * Return: the tally of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *indicator = h;
	size_t tally = 0;

	while (indicator != NULL)
	{
		printf("%d\n", indicator->n);
		tally += 1;
		indicator = indicator->next;
	}
	return (tally);
}


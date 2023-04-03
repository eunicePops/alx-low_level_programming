#include "lists.h"

/**
 * listint_len - returns the number of elements
 * or nodes in a linked list
 *
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *indicator = h;
	size_t tally = 0;

	while (indicator != NULL)
	{
		tally += 1;
		indicator = indicator->next;
	}
	return (tally);
}


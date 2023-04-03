#include "lists.h"


/**
 * print_listint - is a function that
 * prints all the elements
 * of a linked list named listint_t
 * 
 * @h: head of the list
 * 
 * Return: number of nodes
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

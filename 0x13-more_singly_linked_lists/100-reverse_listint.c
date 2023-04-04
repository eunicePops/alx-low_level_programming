#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *del;

	ptr = NULL;
	del = NULL;

	while (*head != NULL)
	{
		del = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = del;
	}

	*head = ptr;
	return (*head);
}

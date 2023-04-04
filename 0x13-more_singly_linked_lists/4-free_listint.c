#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *brief;

	while (head != NULL)
	{
		brief = head;
		head = head->next;
		free(brief);
	}
}

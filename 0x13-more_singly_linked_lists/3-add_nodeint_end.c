#include "lists.h"

/**
 * add_nodeint - function adds a node
 * to the end of the linked list
 *
 * @head: points to the head of the list
 * @n: integer
 *
 * Return: address of node added the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node;
	listint_t *indicator = *head;

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node != NULL)
	{
		fresh_node->n = n;
		fresh_node->next = NULL;
	}
	else
		return (NULL);
	if (indicator != NULL)
	{
		while (indicator->next != NULL)
			indicator = indicator->next;
		indicator->next = fresh_node;
	}
	else
		*head = fresh_node;
	return (fresh_node);
}

#include "lists.h"

/**
 * add_nodeint - adds a new at the 
 * begining of linkedlist listint_t
 * @head: pointer to the head of the linked list
 * @n: integer n 
 *
 * Return: address of the newly added node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node != NULL)
	{
		fresh_node->n = n;
		fresh_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		fresh_node->next = *head;
	*head = fresh_node;
	return (fresh_node);
}

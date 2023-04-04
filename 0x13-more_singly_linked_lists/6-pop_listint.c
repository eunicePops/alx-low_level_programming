#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a linked list
 * @head : pointer to the head of the linked list
 * Return: n
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *brief;
int n;

brief = *head;

if (brief == NULL)
return (0);

*head = brief->next;
n = brief->n;
free(brief);
return (n);
}

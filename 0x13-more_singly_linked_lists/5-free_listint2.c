#include "lists.h"
/**
 * free_listint2 - a function that frees a linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *brief;

if (head == NULL)
return;

while (*head)
{
brief = *head;
*head = (*head)->next;
free(brief);
}
head = NULL;
}

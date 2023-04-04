#include "lists.h"
/**
 * insert_nodeint_at_index - a function that adds a new node
 * to a linked list at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list indicating
 * the position for the new node to be added
 *         (index starting point is at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *brief = *head;
unsigned int node;

newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;

if (idx == 0)
{
newnode->next = brief;
*head = newnode;
return (newnode);
}

for (node = 0; node < (idx - 1); node++)
{
if (brief == NULL || brief->next == NULL)
return (NULL);

brief = brief->next;
}

newnode->next = brief->next;
brief->next = newnode;

return (newnode);
}

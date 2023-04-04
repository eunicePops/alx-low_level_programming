#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (index always starting at 0)
 * Return: 1 - returns 1 if function succeeds,
 *        -1 - returns -1 if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *brief, *cpy = *head;
unsigned int node;

if (cpy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(cpy);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (cpy->next == NULL)
return (-1);

cpy = cpy->next;
}

brief = cpy->next;
cpy->next = brief->next;
free(brief);
return (1);
}

#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that sums  all the data (n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of all the data (n),
 *         or 0 - when list is empty
 */
int sum_listint(listint_t *head)
{
int ;

addup = 0;

while (head)
{
addup += head->n;
head = head->next;
}
return (addup);
}

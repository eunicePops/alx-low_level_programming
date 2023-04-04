#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that calculate
 * the sum of all the data (n) in a linked list
 * @head : pointer to the head of the list
 * Return: sum or addition of all the data (n),
 *         or 0 - returns 0 if  the list is empty
 */
int sum_listint(listint_t *head)
{
int addnodes;

addnodes = 0;

while (head)
{
addnodes += head->n;
head = head->next;
}
return (addnodes);
}

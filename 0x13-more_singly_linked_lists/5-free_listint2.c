#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *container;

if (head == NULL)
return;

while (*head)
{
container = *head;
*head = (*head)->next;
free(container);
}
head = NULL;
}

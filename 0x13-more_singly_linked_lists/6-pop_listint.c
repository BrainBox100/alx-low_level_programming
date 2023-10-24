#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)

listint_t *container;
int n;

container = *head;

if (container == NULL)
return (0);

*head = container->next;
n = container->n;
free(container);
return (n);
}

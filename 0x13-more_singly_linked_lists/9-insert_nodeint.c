#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : The new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *fresh, *container = *head;
unsigned int node;

fresh = malloc(sizeof(listint_t));

if (fresh == NULL)
return (NULL);

fresh->n = n;

if (idx == 0)
{
fresh->next = container;
*head = fresh;
return (fresh);
}

for (node = 0; node < (idx - 1); node++)
{
if (container == NULL || container->next == NULL)
return (NULL);

container = container->next;
}

fresh->next = container->next;
container->next = fresh;

return (fresh);
}

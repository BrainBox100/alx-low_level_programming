#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *container, *move = *head;
unsigned int node;

if (move == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(move);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (move->next == NULL)
return (-1);

move = move->next;
}

container = move->next;
move->next = container->next;
free(container);
return (1);
}

#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nodeA, *nodeB;

if (head == NULL || head->next == NULL)
return (NULL);

nodeA = head->next;
nodeB = (head->next)->next;

while (nodeB)
{
if (nodeA == nodeB)
{
nodeA = head;

while (nodeA != nodeB)
{
nodeA = nodeA->next;
nodeB = nodeB->next;
}

return (nodeA);
}

nodeA = nodeA->next;
nodeB = (nodeB->next)->next;
}

return (NULL);
}

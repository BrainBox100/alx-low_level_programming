#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh_node, *present_node;
	size_t n;

	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	fresh_node->len = n;
	fresh_node->next = NULL;
	present_node = *head;

	if (fresh_node == NULL)
	{
		*head = fresh_node;
	}
	else
	{
		while (present_node->next != NULL)
			present_node = present_node->next;
		present_node->next = fresh_node;
	}

	return (*head);
}

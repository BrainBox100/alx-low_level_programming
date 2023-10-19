#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh_node;
	size_t n;

	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	fresh_node->len = n;
	fresh_node->next = *head;
	*head = fresh_node;

	return (*head);
}

#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a node to the beginning
 * @head: head of node
 * @str: string parameter
 * Return: address or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

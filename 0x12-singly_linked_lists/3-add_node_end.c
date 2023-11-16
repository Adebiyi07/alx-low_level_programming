#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node to the end
 * @head: head of the node
 * @str: string parameter
 * Return: address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}

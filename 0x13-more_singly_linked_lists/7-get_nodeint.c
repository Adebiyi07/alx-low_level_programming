#include "lists.h"

/**
 * get_nodeint_at_index - print nth node of a linked list
 * @head: first node
 * @index: position of node in list
 * Return: null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

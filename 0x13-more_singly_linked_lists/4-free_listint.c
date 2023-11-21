#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: pointer to the first node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}

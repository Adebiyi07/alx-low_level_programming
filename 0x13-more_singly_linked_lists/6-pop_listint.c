#include "lists.h"

/**
 * pop_listint - delete head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (head == NULL || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}


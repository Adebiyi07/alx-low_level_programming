#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data for new node
 * Return: pointer to the new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}


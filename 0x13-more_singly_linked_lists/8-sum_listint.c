#include "lists.h"

/**
 * sum_listint - sums the data in a linked list
 * @head: first node
 * Return: returns the sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum +  head->n;
		head = head->next;
	}
	return (sum);
}

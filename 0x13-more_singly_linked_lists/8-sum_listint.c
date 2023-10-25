#include "lists.h"

/**
 * sum_listint - sum the data in lists
 * @head: first node
 *
 * Return: int sum || 0 if NULL
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}

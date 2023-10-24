#include "lists.h"

/**
 * listint_len - returned no. of the  elements in linked list
 * @h: first node
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: element of listint_t
 *
 * Return: number of element of the listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}

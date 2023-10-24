#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of the list
 * @head: first node
 * @index: nth node
 *
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	j = 0;
	while ((j < index) && head != NULL)
	{
		head = head->next;
		j++;
	}
	if (j == index)
		return (head);
	return (NULL);
}

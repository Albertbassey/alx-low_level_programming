#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given idex
 * @head: first node
 * @index: an index to delete node
 *
 * Return: 1 || -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp_node, *current;

	if (*head == NULL)
		return (-1);

	tmp_node = *head;
	if (index == 0)
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}

	while (j < (index - 1) && tmp_node != NULL)
	{
		tmp_node = tmp_node->next;
		j++;
	}

	if (j != (index - 1) || tmp_node->next == NULL)
		return (-1);

	current = tmp_node->next;
	tmp_node->next = (tmp_node->next)->next;
	free(current);
	return (1);
}

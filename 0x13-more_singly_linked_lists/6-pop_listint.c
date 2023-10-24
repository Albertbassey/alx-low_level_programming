#include "lists.h"

/**
 * pop_listint - delete head of the list and return data
 * @head: first node
 *
 * Return: int node
 *
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *tmp_node;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	node_data = tmp_node->n;
	*head = tmp_node->next;
	free(tmp_node);
	return (node_data);
}

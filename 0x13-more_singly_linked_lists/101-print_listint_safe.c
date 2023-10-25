#include "lists.h"
#include "tmp_node.c"

/**
 * print_listint_safe - prints linked list
 * @head: first node
 *
 * Return: number of nodes or exit(98)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, k = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < k; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (k);
			}
		}
		k++;
		list = tmp_node(list, k, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (k);
}

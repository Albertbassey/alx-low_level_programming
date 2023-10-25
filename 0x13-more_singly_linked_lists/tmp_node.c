#include "lists.h"

/**
 * tmp_node - new memory
 * @list: old list
 * @size: size of new list
 * @new: new list
 *
 * Return: a newlist
 *
 */

const listint_t **tmp_node(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];

	newlist[j] = new;
	free(list);
	return (newlist);
}

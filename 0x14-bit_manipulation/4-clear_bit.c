#include "main.h"

/**
 * clear_bit - to set bit to 1 at a given index
 * @n: a number
 *
 * @index: index to set a number
 *
 * Return: 1 || -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int j = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	j = ~(j << index);
	*n = (*n & j);
	return (1);
}

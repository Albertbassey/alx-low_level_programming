#include "main.h"

/**
 * flip_bits - the  number of bits needed to flip
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, j = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		j += flips & 1;
		flips >>= 1;
	}
	return (j);
}

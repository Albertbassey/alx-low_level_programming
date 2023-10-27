#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: returns 0 if big, 1 if little
 */

int get_endianness(void)
{
	int j = 1;
	char *check;

	check = (char *)&j;
	return ((int)check[0]);
}

#include "variadic_functions.h"

/**
 * printc - prints char
 * @vprint: the char
 */
void printc(va_list vprint)
{
	printf("%c", va_arg(vprint, int));
}

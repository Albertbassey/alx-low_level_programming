#include "variadic_functions.h"

/**
 * printi - prints int
 * @vprint: the integer
 */
void printi(va_list vprint)
{
	printf("%d", va_arg(vprint, int));
}

#include "main.h"
/**
 * swap_int - Function that swaos the value
 * @a : parameter
 * @b : parameter
 *
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

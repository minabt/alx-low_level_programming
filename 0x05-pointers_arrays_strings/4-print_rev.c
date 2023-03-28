#include "main.h"
/**
 * print_rev - Function that print rev
 *@s: parameter
 *
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{

		len++;
		s++;
	}
	s--;


	for (i = len; i > 0; i--)
	{

		_putchar(*s);

		s--;
	}
	_putchar('\n');
}

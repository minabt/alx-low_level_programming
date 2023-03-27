#include "main.h"
/**
 * print_rev - Function that print rev
 *@s: parameter
 *
 */
void print_rev(char *s)
{
	while (*s != '\0')
        {
                 print_rev(s);
        }
         _putchar('\n');

}

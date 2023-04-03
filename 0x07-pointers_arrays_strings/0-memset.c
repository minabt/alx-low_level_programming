#include "main.h"
/**
 * _memset - Function that fils a block of memory
 * @s: starting adress of memory to be filles
 * @b: the disired value
 * @n:numbers of bytes to be changed
 *
 * Return: a pointer to a memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}

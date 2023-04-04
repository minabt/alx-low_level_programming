#include "main.h"
/**
 * _memcpy - Function copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: numbers of bytes
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0 ; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

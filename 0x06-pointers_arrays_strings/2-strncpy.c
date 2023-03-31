#include "main.h"
/**
 **_strncpy - Function that copies string
 *@n: the numbers of copies
 *@dest: PZZarameter destination
 *@src: Parameter of source
 *Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

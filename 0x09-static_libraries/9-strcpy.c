#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer pointer.
 * @dest: pointer to char.
 * @src: pointer to char.
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

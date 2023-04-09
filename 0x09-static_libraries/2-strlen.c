#include "main.h"
/**
 * _strlen - funcion that returns the length of a string
 *@s: string
 *Return: return length
 */
int _strlen(char *s)
{
        int lengthi = 0;

        while (*s != '\0')
         {
                 lengthi++;
                 s++;
         }

         return (lengthi);

}

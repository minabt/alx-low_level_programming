#include "main.h"
/**
* _isupper  - Function that checks for uppercase character.
*
*@c: is a parameter
*Return: 0 or 1
*/
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        return (1);
        else
                return (0);
}

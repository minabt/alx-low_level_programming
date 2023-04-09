#include "main.h"
/**
*_isdigit -Function checks for a digit
*
*Return: 0 or 1
*@c: char to be checked
*/
int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);

        else
                return (0);

}

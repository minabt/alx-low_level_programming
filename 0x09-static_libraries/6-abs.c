#include "main.h"
/**
* _abs - function that computes the absolute value of an integer
*Description: positive interger
*Return: always
*@i: parametre to check
*/
int _abs(int i)
{
        if (i > 0)
                i = i;
        else if (i < 0)
                i = -(i);
        return (i);
}

#include "main.h"
/**
 *print_sign - function prints sign
 *Description: print sign using
 *Return: 1 if positive
 *0 if is 0
 *-1 if negative
 *@n: n is a parametre
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}

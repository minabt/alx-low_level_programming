#include "main.h"
/**
*print_last_digit - function that prints the last digit of a number
*
*@i : function parameter
*Return: taks the value of last digit
*/
int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (i < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

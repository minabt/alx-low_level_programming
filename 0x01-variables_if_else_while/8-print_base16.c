#include <stdio.h>
/**
 * main- Function to start
 *
 *Return: always 0
 */
int main(void)
{
	char i;
	char c;

	for (i = 48 ; i <= 57 ; i++)
		putchar(i);

	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}

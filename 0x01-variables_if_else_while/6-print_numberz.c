#include <stdio.h>
/**
 * main - Function to start
 *
 *Description: prints numbers using putchar
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

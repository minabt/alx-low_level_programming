#include <stdio.h>
/**
 * main - Functionto start
 * Description: prints numbers with comma and space
 * Return: always 0
 */
int main(void)
{
	int i;
	int b = 44;
	int c = 32;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		putchar(b);
		putchar(c);
	}
	putchar('\n');
	return (0);
}

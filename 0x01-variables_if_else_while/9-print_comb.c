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

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);

		if (i < 57)
		{
		putchar(b);
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

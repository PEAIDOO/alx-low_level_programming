#include <stdio.h>

/**
 * main - main is here
 *
 * Return: 0 lives here
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(1 + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
		

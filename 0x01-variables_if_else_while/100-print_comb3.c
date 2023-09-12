#include <stdio.h>

/**
 * main - main lives here
 *
 * Return: 0 is here
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j >= 9; i++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


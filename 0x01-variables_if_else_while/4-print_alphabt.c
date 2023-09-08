#include <stdio.h>

/**
 * main - main is here
 *
 * Return: 0 lives here
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}



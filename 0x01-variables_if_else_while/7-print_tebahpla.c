#include <stdio.h>

/**
 * main - main lives here
 *
 * Return: 0 resides here
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

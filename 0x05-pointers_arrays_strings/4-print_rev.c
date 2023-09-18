#include "main.h"

/**
 * print_rev - function
 * @s: variable s
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - function to work with
 * @a: first parameter
 * Return: return 0
 */

int print_last_digit(int a)
{
	int m;

	m = a % 10;
	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}

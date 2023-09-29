#include "main.h"

/**
 * _memset - function
 * @s: pointer
 * @b: constant byte
 * @n : one of the arguments
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

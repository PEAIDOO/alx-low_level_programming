#include "main.h"

/**
 * _memcpy - function
 * @dest: destination string
 * @src: source string
 * @n: a variable integer
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

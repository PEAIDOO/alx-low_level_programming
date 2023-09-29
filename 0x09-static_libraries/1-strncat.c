#include "main.h"

/**
 * _strncat - function to conc n
 * @dest: pointer 1
 * @src: pointer 2
 * @n: variable t conct
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[destlen + j] = *src;
		src++;
	}
	dest[destlen + j] = '\0';
	return (dest);
}

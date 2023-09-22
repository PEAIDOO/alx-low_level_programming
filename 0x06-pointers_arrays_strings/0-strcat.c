#include "main.h"

/**
 * _strcat - function to concatenate
 * @dest: fist pointer
 * @src: second pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen[i]; i++)
		destlen[destlen + i] = src[i];
	return (dest);
}

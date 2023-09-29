#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}


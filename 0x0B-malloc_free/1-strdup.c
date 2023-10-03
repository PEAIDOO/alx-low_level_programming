#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a character pointer
 *@str:String to be copied
 * Return: NULL in case of error, pointer to allocated
*/

char *_strdup(char *str)
{
	char *string_to_copy;
	int count, length;

	if (str == NULL)
		return (NULL);

	for (count = 0; str[count]; count++)
		length++;
	string_to_copy = malloc(sizeof(char) * (length + 1));

	if (string_to_copy == NULL)
		return (NULL);

	for (count = 0; str[count]; count++)
	{
		string_to_copy[count] = str[count];
	}

	string_to_copy[length] = '\0';

	return (string_to_copy);
}

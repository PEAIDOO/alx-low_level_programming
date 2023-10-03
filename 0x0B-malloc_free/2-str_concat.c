#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*Return: character pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *concatenated_string;
	int count, concatenated_count = 0,  length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count] || s2[count]; count++)
		length++;

	concatenated_string = malloc(sizeof(char) * length);

	if (concatenated_string == NULL)
		return (NULL);

	for (count = 0; s1[count]; count++)
		concatenated_string[concatenated_count++] = s1[count];

	for (count = 0; s2[count]; count++)
		concatenated_string[concatenated_count++] = s2[count];

	return (concatenated_string);
}

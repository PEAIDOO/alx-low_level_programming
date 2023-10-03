#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: Size of the array
 * @c: Character to insert
 * Return: a pointer character or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *pointer_array;
	unsigned int count;

	pointer_array = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (pointer_array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		pointer_array[count] = c;
	return (pointer_array);
}

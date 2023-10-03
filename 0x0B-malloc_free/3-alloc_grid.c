#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: integer pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **pointer_array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	pointer_array = (int **) malloc(sizeof(int *) * height);
	if (pointer_array != NULL)
	{
		for (; i < height; i++)
		{
			pointer_array[i] = (int *) malloc(sizeof(int) * width);
			if (pointer_array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					pointer_array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(pointer_array[i]);
					i--;
				}
				free(pointer_array);
				return (NULL);
			}
		}
		return (pointer_array);
	}
	else
	{
		return (NULL);
	}
}

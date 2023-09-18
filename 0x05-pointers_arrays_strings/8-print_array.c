#include "main.h"

/**
 * print_array - function
 * @a: var 1
 * @n: var 2
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}


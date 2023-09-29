#include "main.h"

/**
 * _isalpha - check for alpha
 * @c: value w'ere checking for
 * Return: return something
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

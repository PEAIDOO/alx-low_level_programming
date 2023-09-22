#include "main.h"

/**
 * cap_string - capitalize function
 * @str: pointer
 * Return: char
 */

char *cap_string(char *str)
{
	int i, j;

	char c[] = {44, 59, ' ', '\t', '\n', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + j] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	}
	return (str);
}

#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

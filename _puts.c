#include "main.h"

/**
 * _puts - Write a string followed by a newline
 * to the standard output
 * @str: The string to be written
 *
 * This function iterates through the characters
 * of the given string and writes
 * each character using the _putchar function.
 * It then writes a newline character
 * to indicate the end of the string.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


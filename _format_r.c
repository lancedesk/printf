#include "main.h"
#include "format_helpers.h"

/**
 * _format_r - Handle the %r format specifier
 * (reversed string)
 * @args: Argument containing the string
 * to be reversed and printed
 *
 * Return: The number of characters printed
 */

int _format_r(va_list args)
{
	int length, i;
	char *str;

	str = va_arg(args, char*);

	length = 0;

	if (str == NULL)
		str = "(null)";

	length = _strlen(str);

	if (length == 0)
	{
		/* Print nothing for an empty string */
		_putchar('\0');
		return (0);
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (length);
}


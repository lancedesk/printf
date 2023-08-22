#include "main.h"
#include "format_helpers.h"

/**
 *_format_d - Handle the %d format specifier
 * @args: Integer to be printed
 *
 * Return: The number of characters printed
 */

int _format_d(va_list args)
{
	int n, i, length;
	char *buffer;

	n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	buffer = int_to_string(n, NULL);

	if (n < 0)
	{
		_putchar('-');
		length = 1;
	}
	else
	{
		length = 0;
	}

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		length++;
	}

	free(buffer);

	return (length);
}


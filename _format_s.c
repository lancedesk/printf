#include "main.h"
#include "format_helpers.h"

/**
 * _format_s - Handle the %s format specifier
 * @args: String to be printed
 *
 * Return: The number of characters printed
 */

int _format_s(va_list args)
{
	int i, length = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		char *null_str = "(null)";

		for (i = 0; null_str[i] != '\0'; i++)
		{
			_putchar(null_str[i]);
			length++;
		}
		return (length);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		length++;
	}
	return (length);
}



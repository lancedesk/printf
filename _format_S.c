#include "main.h"
#include "format_helpers.h"

/**
 * _format_S - Handle the %S format specifier
 * @args: String to be printed
 *
 * Return: The number of characters printed
 */

int _format_S(va_list args)
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
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			/* Ensure two characters are printed */
			if (str[i] < 16)
				_putchar('0');
			/* Count the three added characters */
			length += 3;
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}
	return (length);
}


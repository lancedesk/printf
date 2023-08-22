#include "main.h"
#include "format_helpers.h"

/**
 * _printf - Custom printf that supports formatted output
 * @format: Format string containing the format specifiers
 * ...: Arguments corresponding to the format specifiers
 *
 * Format specifiers are supported:
 * - %d: Prints an integer
 * - %s: Prints a string
 * - %c: Prints a character
 *
 * Return: The number of characters printed on success,
 * negative value on error
 * (returns -1 if the format string is NULL
 * or there's an unsupported format specifier).
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int printed_chars;
	va_list arguments;

	if (format == NULL)
	{
		/* Return error for NULL format */
		return (-1);
	}

	i = 0;
	printed_chars = 0;
	va_start(arguments, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(arguments);
				/* Return error for incomplete format specifier */
				return (-1);
			}

			printed_chars += handle_format_specifier(format[i], &arguments);
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}

	va_end(arguments);
	return (printed_chars);
}

/**
 * handle_format_specifier - Handle a format specifier
 * @specifier: The format specifier character
 * @arguments: Pointer to the va_list containing the arguments
 *
 * Return: The number of characters printed or
 * processed for the specifier.
 */

int handle_format_specifier(char specifier, va_list *arguments)
{
	int printed_chars = 0;
	int (*handler)(va_list);

	if (specifier == '%')
	{
		_putchar('%');
		printed_chars++;
	}
	else
	{
		handler = format_getter(specifier);
		if (handler)
		{
			printed_chars += handle_valid_format(handler, arguments, specifier);
		}
		else
		{
			_putchar('%');
			_putchar(specifier);
			printed_chars += 2;
		}
	}

	return (printed_chars);
}

/**
 * handle_valid_format - Handle a valid format specifier
 * @handler: Function pointer to the format-specific handler
 * @arguments: Pointer to the va_list containing the arguments
 * @specifier: The format specifier character
 *
 * Return: The number of characters printed
 * by the format-specific handler.
 */

	int handle_valid_format(
			int (*handler)(va_list),
			va_list *arguments,
			char specifier
			)
{
	if (specifier == 'c')
	{
		char c = va_arg(*arguments, int);

		_putchar(c);
		return (1);
	}
	else
	{
		return (handler(*arguments));
	}
}


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
	va_list arguments;
	int printed_chars;

	if (format == NULL)
		return (-1); /* Return error for NULL format */

	va_start(arguments, format);
	printed_chars = handle_format_string(format, &arguments);
	va_end(arguments);

	return (printed_chars);
}

/**
 * handle_format_string - Handles the entire format string
 * @format: Format string containing the format specifiers
 * @arguments: Pointer to the va_list containing the arguments
 *
 * Return: The number of characters printed
 */

int handle_format_string(const char *format, va_list *arguments)
{
	unsigned int i = 0;
	int printed_chars = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1); /* Return error for incomplete format specifier */

			printed_chars += handle_percent_format(&format[i], arguments, &i);
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}

	return (printed_chars);
}

/**
 * handle_percent_format - Handles the format specifier starting with %
 * @format: Pointer to the format string after '%'
 * @arguments: Pointer to the va_list containing the arguments
 * @index: Pointer to the current index in the format string
 *
 * Return: The number of characters printed for this format specifier
 */

int handle_percent_format(
		const char *format,
		va_list *arguments,
		unsigned int *index
		)
{
	int printed_chars = 0;

	if (*format == ' ')
	{
		_putchar('%'); /* Handle case of '% ' (% followed by space) */
		_putchar(' ');
		printed_chars += 2;
	}
	else if (*format == 'r')
	{
		printed_chars += _format_r(*arguments);
	}
	else
	{
		printed_chars += handle_format_specifier(*format, arguments);
	}

	(*index)++; /* Move index to the next character after format specifier */

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

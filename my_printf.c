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
    if (format == NULL)
    {
      /* Return error for NULL format */
      return (-1);
    }

    unsigned int i = 0;
    int printed_chars = 0;
    va_list arguments;
    int (*handler)(va_list);

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
            if (format[i] == '%')
            {
                _putchar('%');
                printed_chars++;
            }
            else
            {
                handler = format_getter(format[i]);
                if (handler)
                {
                    if (format[i] == 'c')
                    {
                        char c = va_arg(arguments, int);
                        _putchar(c);
                        printed_chars++;
                    }
                    else
                    {
                        printed_chars += handler(arguments);
                    }
                }
                else
                {
                    _putchar('%');
                    _putchar(format[i]);
                    printed_chars += 2;
                }
            }
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
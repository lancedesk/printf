#include "main.h"
#include "format_helpers.h"

/**
 * _format_c - Handle the %c format specifier
 * @args: Character to be printed
 *
 * Return: The number of characters printed
 */
int _format_c(va_list args)
{
    char c = va_arg(args, int);

    /* Handle special and unprintable characters */
    if (c < 32 || c > 126)
    {
        /* Print the character as an escape sequence */
        _putchar('\\');
        _putchar('x');
        _putchar((c / 16) + '0');
        _putchar((c % 16) + ((c % 16) < 10 ? '0' : 'a' - 10));
        return (4);
    }
    else
    {
        _putchar(c);
        return (1);
    }
}


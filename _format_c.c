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

	if (c == '\0')
	{
		_putchar('\\');
		_putchar('0');
		return (2);
	}
	else if (c < 32 || c > 126)
	{
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



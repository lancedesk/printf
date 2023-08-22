#include "main.h"
#include "format_helpers.h"

/**
 * _format_percent - Handle the %% format specifier
 * @args: Variadic arguments list (not used)
 *
 * Return: The number of characters printed
 */

int _format_percent(va_list args)
{
	/* Since %% prints a single '%'*/
	/* character, print it using _putchar */

	(void)args;

	_putchar('%');
	return (1);
}

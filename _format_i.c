#include "main.h"
#include "format_helpers.h"

/**
 * _format_i - Handle the %i format specifier
 * @args: Integer to be printed
 *
 * Return: The number of characters printed
 */

int _format_i(va_list args)
{
	int n = va_arg(args, int);
	int res = 0;

	/* Handle negative numbers and output the negative sign */
	if (n < 0)
	{
		_putchar('-');
		res++;
		n = -n; /* Make n positive for further processing */
	}

	/* Output each digit of the number */
	print_number(n, &res);

	return (res);
}



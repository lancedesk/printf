#include "main.h"
#include "format_helpers.h"

/**
 * _format_d - Handle the %d format specifier
 * @args: Integer to be printed
 *
 * Return: The number of characters printed
 */

int _format_d(va_list args)
{
	long int n = va_arg(args, long int);
	int res = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n == INT_MIN)
	{
		_putchar('-');
		res++;
		n = -(long int)(n + 1);
	}

	if (n < 0)
	{
		_putchar('-');
		res++;
		n = -n; /* Make n positive for further processing */
	}

	/* Output each digit of the number */
	print_number((int)n, &res);

	return (res);
}


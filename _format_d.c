#include "main.h"
#include "format_helpers.h"

/* Prototype for the print_number function */
void print_number(int n, int *res);

/**
 * _format_d - Handle the %d format specifier
 * @args: Integer to be printed
 *
 * Return: The number of characters printed
 */

int _format_d(va_list args)
{
	int n = va_arg(args, int);
	int res = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

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


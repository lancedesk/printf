/* print_helpers.c */

#include "main.h"

/**
 * print_number - helper function that prints an integer recursively
 * @n: The integer to be printed
 * @res: Pointer to the result counter
 */
void print_number(int n, int *res)
{
	if (n / 10)
	{
		print_number(n / 10, res);
	}
	_putchar((n % 10) + '0');
	(*res)++;
}


#include "main.h"
#include "format_helpers.h"

/**
 * _format_x - Handle the %x format specifier
 * @args: Unsigned integer to be printed
 * as lowercase hexadecimal
 *
 * Return: The number of characters printed
 */

int _format_x(va_list args)
{
	unsigned int n;
	int length = 0, i;
	char *buffer;

	n = va_arg(args, unsigned int);

	/* Convert unsigned int to lowercase */
	/* hexadecimal string dynamically */
	buffer = int_to_hex_string(n, NULL);

	if (buffer == NULL)
	{
		/* Handle memory allocation failure */
		return (-1);
	}

	/* Output each character using _putchar */
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		length++;
	}

	/* Free dynamically allocated memory */
	free(buffer);

	return (length);
}

#include "main.h"
#include "format_helpers.h"

/* _format_p - Handle the %p format specifier
 * @args: Pointer address to be printed
 *
 * Return: The number of characters printed
 */

int _format_p(va_list args)
{
	void *ptr;
	char *buffer;
	int i, length = 0;

	ptr = va_arg(args, void *);

	/* Convert pointer address to hexadecimal string dynamically */
	buffer = int_to_hex_string_ptr(ptr, NULL);

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

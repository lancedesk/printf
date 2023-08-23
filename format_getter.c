#include "main.h"
#include "format_helpers.h"

/**
 * format_getter - gets function to execute
 * for a specific format specifier
 * @s: The format specifier character
 *
 * Return: Returns a function pointer
 * to the corresponding handler
 *
 * This function searches for the appropriate handler
 * function for a given
 * format specifier character within
 * the format_handlers array.
 * If a matching specifier is found,
 * the corresponding handler function is returned.
 * If no matching specifier is found, NULL is returned.
 */

int (*format_getter(char s))(va_list)
{
	size_t i, format_length, handler_length;

	/* Define format_handlers array */
	FormatHandler format_handlers[] = {
		{ 'b', _format_b },  /* Handler for %b format specifier */
		{ 'c', _format_c },  /* Handler for %c format specifier */
		{ 'd', _format_d },  /* Handler for %d format specifier */
		{ 'f', _format_f },  /* Handler for %f format specifier */
		{ 'i', _format_i },  /* Handler for %i format specifier */
		{ 'o', _format_o },  /* Handler for %o format specifier */
		{ 'p', _format_p },  /* Handler for %p format specifier */
		{ 'r', _format_r },  /* Handler for %r format specifier */
		{ 's', _format_s },  /* Handler for %s format specifier */
		{ 'S', _format_S },  /* Handler for %S format specifier */
		{ 'u', _format_u },  /* Handler for %u format specifier */
		{ 'x', _format_x },  /* Handler for %x format specifier */
		{ 'X', _format_X },  /* Handler for %X format specifier */
		{ '%', _format_percent } /* Handle - % format specifier */
	};

	/* Size of the entire array */
	format_length = sizeof(format_handlers);

	/* Size of first element in the array */
	handler_length = sizeof(format_handlers[0]);

	/* Iterate through the format_handlers array */
	for (i = 0; i <  format_length / handler_length; i++)
	{
		/* Check if the current specifier */
		/* matches the input specifier */

		if (s == format_handlers[i].specifier)
		{
			/* Return the corresponding handler function */
			return (format_handlers[i].handler);
		}
	}

	/* No matching specifier found, return NULL */
	return (NULL);
}


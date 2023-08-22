#include "main.h"

/**
 * double_to_string - Convert a double
 * to a dynamically allocated string
 * @n: Double value to be converted
 * @buffer: Pointer to the buffer for storing the string
 *
 * Return: Pointer to the dynamically allocated string
 */

char *double_to_string(double n, char *buffer)
{
	int i, integer_part, length, decimal_places;
	int fractional_part_int;
	double fractional_part, decimal_multiplier;

	/* Assuming up to 12 digits for fractional part */
	char fractional_buffer[12];

	/* Initialize integer_part */
	integer_part = (int)n;

	fractional_part = n - integer_part;
	integer_part = (int)n;

	/* Convert integer part to string */
	buffer = int_to_string(integer_part, buffer);

	length = strlen(buffer);

	/* Add a '.' separator */
	buffer[length] = '.';
	length++;

	/* Convert fractional part to string */

	/* Keep 6 decimal places */
	decimal_places = 6;

	decimal_multiplier = 1.0;

	for (i = 0; i < decimal_places; i++)
	{
		decimal_multiplier *= 10.0;
	}

	fractional_part_int = (int)(fractional_part * decimal_multiplier);

	int_to_string(fractional_part_int, fractional_buffer);

	/* Copy fractional part to the buffer */
	for (i = 0; i < decimal_places; i++)
	{
		buffer[length] = fractional_buffer[i];
		length++;
	}

	/* Null-terminate the string */
	buffer[length] = '\0';

	return (buffer);
}

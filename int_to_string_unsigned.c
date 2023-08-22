#include "main.h"

/**
 * int_to_string_u - Convert an unsigned integer
 * to a dynamically allocated string
 * @n: Unsigned integer value to be converted
 * @buffer: Pointer to the buffer for storing the string
 *
 *
 * @n: The unsigned integer value to be converted.
 * @buffer: A pointer to a buffer to store
 * the resulting string. If NULL, memory will be allocated.
 *
 * Return: Pointer to the dynamically allocated string.
 * If memory allocation fails,
 * the function exits with failure status.
 */

char *int_to_string_u(unsigned int n, char *buffer)
{
	int length = 0, temp, i;

	if (n == 0)
	{
		length = 1;
	}
	else
	{
		temp = n;
		while (temp != 0)
		{
			temp /= 10;
			length++;
		}
	}

	buffer = (char *)malloc((length + 1));

	if (buffer == NULL)
	{
		/* Handle memory allocation error */
		exit(EXIT_FAILURE);
	}

	if (n == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
	}
	else
	{
		for (i = length - 1; i >= 0; i--)
		{
			buffer[i] = (n % 10) + '0';
			n /= 10;
		}
		buffer[length] = '\0';
	}

	return (buffer);
}

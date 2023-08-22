#include "main.h"

/**
 * int_to_hex_string - Convert an unsigned integer
 * to a dynamically allocated lowercase hexadecimal string
 * @n: Unsigned integer to be converted
 * @buffer: Pointer to the buffer for storing the string
 *
 * Return: Pointer to the dynamically allocated string
 * containing the hexadecimal representation.
 */

char *int_to_hex_string(unsigned int n, char *buffer)
{
	/* Assuming the maximum number of digits is 8 */
	/* (for 32-bit unsigned int) */
	char hex_digits[] = "0123456789abcdef";
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
			temp /= 16;
			length++;
		}
	}

	buffer = (char *)malloc((length + 1));

	if (buffer == NULL)
	{
		/* Handle memory allocation error */
		exit(EXIT_FAILURE);
	}

	for (i = length - 1; i >= 0; i--)
	{
		buffer[i] = hex_digits[n % 16];
		n /= 16;
	}

	buffer[length] = '\0';

	return (buffer);
}

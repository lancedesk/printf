#include "main.h"

/**
 * int_to_hex_string_ptr - Convert a pointer address
 * to a dynamically allocated hexadecimal string
 * @ptr: Pointer address to be converted
 * @buffer: Pointer to the buffer for storing the string
 *
 * Return: Pointer to the dynamically allocated
 * hexadecimal string
 */

char *int_to_hex_string_ptr(void *ptr, char *buffer)
{
	int i, digit, length = 0;
	unsigned long n = (unsigned long)ptr;

	/* Calculate the length of the hexadecimal string */
	if (n == 0)
	{
		length = 1;
	}
	else
	{
		unsigned long temp = n;

		while (temp != 0)
		{
			temp >>= 4;
			length++;
		}
	}
	/* Allocate memory for the buffer */
	/* Include space for "0x" prefix & '\0'*/
	buffer = (char *)malloc((length + 3));

	if (buffer == NULL)
	{
		/* Handle memory allocation error */
		exit(EXIT_FAILURE);
	}
	/* Add "0x" prefix to the buffer */
	buffer[0] = '0';
	buffer[1] = 'x';
	/* Convert the hexadecimal value to a string */
	for (i = length + 1; i >= 2; i--)
	{
		digit = n & 0xF;
		buffer[i] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		n >>= 4;
	}
	buffer[length + 2] = '\0';
	return (buffer);
}

#include "main.h"

/**
 * int_to_octal_string - Convert an unsigned integer
 * to a dynamically allocated octal string
 * @n: Unsigned integer to be converted
 * @buffer: Pointer to the buffer for storing the string
 *
 * Return: Pointer to the dynamically allocated octal string
 */

char *int_to_octal_string(unsigned int n, char *buffer)
{
	int j, length, i = 0;
	char temp;

	/* Maximum length of octal representation */
	buffer = (char *)malloc(12);

	if (buffer == NULL)
	{
		/* Handle memory allocation failure */
		exit(EXIT_FAILURE);
	}

	if (n == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
	}
	else
	{
		while (n != 0)
		{
			buffer[i] = (n % 8) + '0';
			n /= 8;
			i++;
		}
		buffer[i] = '\0';
	}

	/* Reverse the octal string */
	length = strlen(buffer);
	for (j = 0; j < length / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[length - j - 1];
		buffer[length - j - 1] = temp;
	}

	return (buffer);
}

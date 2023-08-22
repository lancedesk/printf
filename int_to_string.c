#include "main.h"

/* int_to_string - Convert an integer
 * to a dynamically allocated string
 * @n: Integer to be converted
 *
 * Return: Pointer to the dynamically allocated string
 */

char *int_to_string(int n, char *buffer)
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

		if (n < 0)
		{
			buffer[0] = '-';
			/* Convert to positive for processing */
			n = -n;
		}

		for (i = length - 1; i >= 0; i--)
		{
			buffer[i] = (n % 10) + '0';
			n /= 10;
		}
		buffer[length] = '\0';
	}

	return (buffer);
}

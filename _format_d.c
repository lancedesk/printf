#include "main.h"
#include "format_helpers.h"

/**
  *_format_d - Handle the %d format specifier
  * @args: Integer to be printed
  *
  * Return: The number of characters printed
*/

int _format_d(va_list args)
{
    int n, i, length;
    char *buffer;
  
    n = va_arg(args, int);

    /* Convert integer to string dynamically */

    /* Pass NULL to get the length */
    buffer = int_to_string(n, NULL);

    /* Output the negative sign if */
    /* the integer is negative */
    if (n < 0)
    {
        _putchar('-');
        /* Account for the negative sign */
        length = 1;
    }
    else
    {
        length = 0;
    }

    /* Output each character using _putchar */
    for (i = 0; buffer[i] != '\0'; i++)
    {
        _putchar(buffer[i]);
        length++;
    }

    /* Free the dynamically allocated memory */
    free(buffer);
  
    return (length);
}
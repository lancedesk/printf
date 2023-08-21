#include "main.h"
#include "format_helpers.h"

/* _format_f - Handle the %f format specifier
 * @args: Floating-point number to be printed
 *
 * Return: The number of characters printed
 */

int _format_f(va_list args)
{
    double n;
    int i, length;
    char *buffer;

    n = va_arg(args, double);

    /* Convert double to string dynamically */
    /* Passing NULL to get the required length */
    buffer = double_to_string(n, NULL);
    
    if (buffer == NULL)
    {
        /* Handle memory allocation failure */
        return (-1);
    }

    /* Output the negative sign if the number is negative */
    if (n < 0)
    {
        _putchar('-');
    }

    /* Output each character using _putchar */
    length = 0;
    
    for (i = 0; buffer[i] != '\0'; i++)
    {
        _putchar(buffer[i]);
        length++;
    }

    /* Free dynamically allocated memory */
    free(buffer);

    return (length);
}
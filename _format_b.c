#include "main.h"
#include "format_helpers.h"

/**
* _format_b - Handles the %b format specifier*
 * for binary conversion
 * @args: Variable arguments list containing
 * the unsigned int to be converted
 *
 * Return: The number of characters printed
*/

int _format_b(va_list args)
{
    int i, length;
    unsigned int num;
    
    num = va_arg(args, unsigned int);

    // Assuming a 32-bit integer */
    char buffer[32];

    /* Implement int_to_binary function */
    int_to_binary(num, buffer);
    
    length = 0;
    for (i = 0; buffer[i] != '\0'; i++)
    {
        _putchar(buffer[i]);
        length++;
    }
    
    return (length);
}

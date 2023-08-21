#include "main.h"

/**
 * int_to_binary - Converts an unsigned integer
 * to its binary representation
 * @n: The unsigned integer to be converted
 * @buffer: The buffer to store the binary representation
 *
 * Return: A pointer to the buffer
 * containing the binary representation
*/

char *int_to_binary(unsigned int n, char *buffer)
{
    int i, j, len;

    i = 0;
    
    while (n > 0)
    {
        buffer[i] = (n % 2) + '0';
        n /= 2;
        i++;
    }
    
    if (i == 0)
        /* Handle case where input is 0 */
        buffer[i++] = '0';
    
    buffer[i] = '\0';
    
    /* Reverse the binary string */
    len = i;
  
    for (j = 0; j < len / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[len - j - 1];
        buffer[len - j - 1] = temp;
    }
    
    return (buffer);
}
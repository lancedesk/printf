#include "main.h"
#include "format_helpers.h"

/**
  *_format_c - Handle the %c format specifier
  * @args: Character to be printed
  *
  * Return: The number of characters printed
*/

int _format_c(va_list args)
{
  char c = va_arg(args, int); 
  _putchar(c);

  /* Chars like '%c' always print one character */
  return (1);
}
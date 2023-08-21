# Custom printf Function Clone in C

This project aims to create a custom `printf` function clone in the C programming language. The custom `_printf` function will provide similar functionality to the standard `printf` function, allowing you to format and print output to the console.

## Features

- Format and print output to the console using custom format specifiers.
- Support for basic format specifiers like `%d`, `%s`, `%c`, etc.
- Organized modular code structure adhering to the provided guidelines.
- Tested with various format strings and argument types.

## File Structure

The project is organized into the following files:

- `main.c`: Contains the `main` function for testing the custom `my_printf` function.
- `my_printf.c`: Implementation of the custom `_printf` function and related helpers.
- `main.h`: Header file declaring the `_printf` function and related declarations.
- `format_helpers.h`: Header file with declarations for format helper functions.
- `_putchar.c`: Implementation of the `_putchar` function used to output characters.
- `_puts.c`: Implementation of the `_puts` function used to output strings.
- `format_getter.c`: Implementation of the `format_getter` function to retrieve format handlers.
- `_format_b.c`: This file contains the implementation of the _format_b function, which handles the %b format specifier.
- `_format_c.c`: Implementation of the `_format_c` function for character formatting.
- `_format_d.c`: Implementation of the `_format_d` function for integer formatting.
- `_format_f.c`: Implementation of the `_format_f` function for floating-point formatting.
- `_format_i.c`: Implementation of the `_format_i` function for integer formatting.
- `_format_o.c`: Implementation of the `_format_o` function for octal formatting.
- `_format_p.c`: Implementation of the `_format_p` function for pointer address formatting.
- `_format_s.c`: Implementation of the `_format_s` function for string formatting.
- `_format_u.c`: Implementation of the `_format_u` function for unsigned integer formatting.
- `_format_x.c`: Implementation of the `_format_x` function for lowercase hexadecimal formatting.
- `_format_percent.c`: Implementation of the `_format_percent` function for '%' character formatting.
- `double_to_string.c`: Implementation of the `double_to_string` function for converting double to string.
- `int_to_string.c`: Implementation of the `int_to_string` function for integer to string conversion.
- `int_to_hex_string.c`: Implementation of the `int_to_hex_string` function for integer to hexadecimal string conversion.
- `int_to_hex_string_ptr.c`: Implementation of the `int_to_hex_string_ptr` function for pointer address to hexadecimal string conversion.
- `int_to_octal_string.c`: Implementation of the `int_to_octal_string` function for integer to octal string conversion.
- `int_to_string_unsigned.c`: Implementation of the `int_to_string_unsigned` function for unsigned integer to string conversion.
- `int_to_binary.c`: This file implements the int_to_binary function, which converts an unsigned integer to its binary representation.

**Note:** This project is for educational purposes and may not cover all edge cases and complexities of the standard `printf` function. It serves as an exercise in understanding string formatting and handling variable arguments in C.

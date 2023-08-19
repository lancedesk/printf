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
- `format_helpers.c`: Helper functions to handle different format specifiers.
- `format_helpers.h`: Header file with declarations for format helper functions.
- `_putchar.c`: Implementation of the _putchar function used to output characters.
- `_puts.c`: Implementation of the _puts function used to output strings.
- `format_getter.c`: Implementation of the format_getter function to retrieve format handlers.
- `int_to_string.c`: Implementation of the int_to_string function for integer to string conversion.

---

**Note:** This project is for educational purposes and may not cover all edge cases and complexities of the standard `printf` function. It serves as an exercise in understanding string formatting and handling variable arguments in C.

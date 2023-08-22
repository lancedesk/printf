#ifndef FORMAT_HELPERS_H
#define FORMAT_HELPERS_H

#include <stdarg.h>

/**
 * FormatHandler - Structure to hold a format specifier
 * and its corresponding handler function
 * @specifier: The format specifier character
 * (e.g., 'd', 's', 'c')
 * @handler: Pointer to the function
 * that handles the format specifier
 *
 * This structure defines a mapping between
 * a format specifier character and its
 * corresponding handler function.
 * It allows dynamic selection of a handler
 * based on the encountered format specifier.
 */
typedef struct {
	char specifier;
	int (*handler)(va_list);
} FormatHandler;

/* format_handlers - Array of FormatHandler structures
 *
 * This array holds FormatHandler structures that map format specifier characters
 * to their corresponding handler functions. When processing a format specifier
 * in the printf-like function, the appropriate handler function can be selected
 * using this array.
 *
 * The array is initialized with format specifier characters and their handler
 * function pointers (e.g., 'd' with _format_d). Additional entries can be added
 * to support more format specifiers.
 */

int _format_b(va_list args);
int _format_c(va_list args);
int _format_d(va_list args);
int _format_f(va_list args);
int _format_i(va_list args);
int _format_o(va_list args);
int _format_p(va_list args);
int _format_s(va_list args);
int _format_u(va_list args);
int _format_x(va_list args);
int _format_X(va_list args);
int _format_percent(va_list args);

/* Declare format_handlers array */
extern FormatHandler format_handlers[];

/* %li %%*/
#endif

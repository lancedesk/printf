#ifndef FORMAT_HELPERS_H
#define FORMAT_HELPERS_H

#include <stdarg.h>

/**
 * struct FormatProcessor - Structure to hold a format specifier
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

struct FormatProcessor
{
	char specifier;
	int (*handler)(va_list);
};


typedef struct FormatProcessor FormatHandler;

int _format_b(va_list args);
int _format_c(va_list args);
int _format_d(va_list args);
int _format_f(va_list args);
int _format_i(va_list args);
int _format_o(va_list args);
int _format_p(va_list args);
int _format_r(va_list args);
int _format_s(va_list args);
int _format_S(va_list args);
int _format_u(va_list args);
int _format_x(va_list args);
int _format_X(va_list args);
int _format_percent(va_list args);

int handle_format_specifier(char specifier, va_list *arguments);
int handle_valid_format(
		int (*handler)(va_list),
		va_list *arguments,
		char specifier
		);

int handle_format_string(const char *format, va_list *arguments);

int handle_percent_format(
	const char *format,
	va_list *arguments,
	unsigned int *index
);

int handle_format_specifier(char specifier, va_list *arguments);

/* Declare format_handlers array */
extern FormatHandler format_handlers[];

/* %li %%*/
#endif


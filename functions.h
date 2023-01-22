#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - a structure for symbols and functions.
*
* @op: The operator.
* @f: The function.
*/
typedef struct convert
{
	char *op;
	int (*f)(va_list);
} conver_t;

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif

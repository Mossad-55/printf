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
int print_number(va_list args);
int print_int(va_list args);
int unsigned_integer(va_list);
int _write_char(char);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int, char);
int print_octal(va_list list);


int print_unsigned_number(unsigned int);
void write_base(char *str);
char *rev_string(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int base_len(unsigned int, int);

#endif

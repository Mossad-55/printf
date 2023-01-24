#include "main.h"

/**
 * _printf - prints to the console.
 *
 * @format: string with formated chars.
 * Return: int. (Total count of the printed chars)
 */
int _printf(const char *format, ...)
{
	int num_of_chars;
	conver_t format_list[] = {
			{"c", print_char},
			{"s", print_string},
			{"%", print_percent},
			{"d", print_int},
			{"i", print_int},
			{"u", unsigned_integer},
			{"o", print_octal},
			{"x", print_hex},
			{"X", print_heX}
	};

	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	num_of_chars = parser(format, format_list, list);
	va_end(list);

	return (num_of_chars);
}

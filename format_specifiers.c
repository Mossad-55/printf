#include "main.h"

/**
 * print_char - Prints a character.
 * @list: args
 * Return: int (printed chars).
 */
int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: args.
 * Return: int (printed chars).
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_write(str[i]);

	return (i);
}

/**
 * print_percent - Prints a percent symbol %.
 * @list: args
 * Return: int (printed chars).
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write('%');
	return (1);
}

/**
 * print_int - Prints the int
 * @list: args
 * Return: int (printed int)
 */
int print_int(va_list list)
{
	int len;

	len = print_number(list);
	return (len);
}

/**
 * unsigned_integer - Prints Unsigned numbers
 * @list: arguments
 * Return: Count of numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_unsigned_number(n));

	if (n < 1)
		return (-1);
	return (print_unsigned_number(n));
}

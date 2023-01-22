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

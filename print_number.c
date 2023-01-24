#include "main.h"

/**
 * print_number - Print the number
 * @args: Arguments
 * Return: The number
 */
int print_number(va_list args)
{
	int n, len, d;
	unsigned int num;

	n = va_arg(args, int);
	d = 1;
	len = 0;

	if (n < 0)
	{
		len += _write('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += _write('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (len);
}

/**
 * print_unsgined_number - Prints an unsigned number
 * @n: The number printed
 * Return: Count of number printed
 */

int print_unsgined_number(unsigned int n)
{
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;
	num = n;

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += _write_char('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (len);
}

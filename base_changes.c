#include "main.h"
#include <stdio.h>

/**
 * print_hex - Prints a number of base_16 lowercase
 * @list: Arguments
 * Return: Characters count printed
 */

int print_hex(va_list list)
{
	unsigned int num;
	int len, reminder;
	char *hex;
	char *hex_rev;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		reminder = num % 16;
		if (reminder > 9)
		{
			reminder = hex_check(reminder, 'x');
			hex[len] = reminder;
		}
		else
		{
			hex[len] = reminder + 48;
		}
		num = num / 16;
	}
	hex[len] = '\0';
	hex_rev = rev_string(hex);
	if (hex_rev == NULL)
		return (-1);
	write_base(hex_rev);
	free(hex);
	free(hex_rev);
	return (len);
}

/**
 * print_heX - Print the number in base_16 Uppercase
 * @list: Arguments
 * Return: Characters count printed
 */

int print_heX(va_list list)
{
	unsigned int num;
	int len;
	int reminder;
	char *hex;
	char *hex_rev;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		reminder = num % 16;
		if (reminder > 9)
		{
			reminder = hex_check(reminder, 'X');
			hex[len] = reminder;
		}
		else
			hex[len] = reminder + 48;
		num = num / 16;
	}
	hex[len] = '\0';
	hex_rev = rev_string(hex);
	if (hex_rev == NULL)
		return (-1);
	write_base(hex_rev);
	free(hex);
	free(hex_rev);
	return (len);
}

/**
 * hex_check - Checks which function to call
 * @num: Conver to letter
 * @x: Decide the call of the function
 * Return: Ascii code for the letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}

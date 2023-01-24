#include "main.h"

/**
 * _write_char - Writes char to standard output
 * @c: The printed character
 * Return: 1 On success
 * -1 is On error
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

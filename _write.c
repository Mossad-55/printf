#include "main.h"

/**
 * _write - writes a character to stdout.
 * @c: char
 *
 * Return: 1 (Success) or -1 (Error)
 */
int _write(char c)
{
	return (write(1, &c, 1));
}

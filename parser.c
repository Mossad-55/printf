#include "main.h"

/**
 * parser - takes a string with a formated symbols and print it.
 *
 * @format: string
 * @f_list: struct.
 * @arg_list: args.
 * Return: int (printed chars).
 */
int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].op != NULL; j++)
			{
				if (format[i + 1] == f_list[j].op[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}

			if (f_list[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					printed_chars += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_write(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}

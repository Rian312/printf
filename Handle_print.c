#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * handle_print - Handles formatted printing to stdout
 * @format: the format string containing conversion specifiers
 * @...: additional arguments for the format string
 *
 * Return: number of characters printed except null byte
 */

int handle_print(const char *format, ...)
{
	int printed chars = 0;
	va_list args;
        va_start(args,format);
	
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char char_arg = (char)va_arg(args, int);
				_putchar(char_arg);
				printed_chars++;
			}
			eise if (format == 's')
			{
				char *str_arg = va_arg(args, char *);
				int len = strlen(str_arg);
				printed_chars += len;
				write(1, str_arg, len);
			}
		}
		format++;
	}

	va_end(args);
	return printed_chars;
}

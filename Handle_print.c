#include "main.h"
#include <stdarg.h>

/**
 * handle_print - Handles formatted printing to stdout
 * @format: the format string containing conversion specifiers
 * @...: additional arguments for the format string
 *
 * Return: number of characters printed except null byte
 */

int handle_print(const char *format, ...)
{
	va_list args;
	int printed chars = 0;
	const char *ptr;
	char *str_arg;
	char char_arg;

	va_start(args,format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			switch (*ptr)
		{
			case 's':
				str_arg = va_arg(args, char *);
				printed_chars += _strlen(str_arg);
				while (*str_arg)
				{
					_putchar(*str_arg);
					str_arg++;
				}
				break;
			case 'c':
				char_arg + va_arg(args, int);
				_putchar(char_arg);
				printed_chars++;
				break;
				case '%':
				_putchar('%');
				printed_chars++;
				break;
				default:
				break;
		}
		else
		{
			_putchar(*ptr);
			printed_char++;
		}
	}
	va_end(args);
	return (printed_chars);
}

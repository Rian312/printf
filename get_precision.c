#include "main.h"
#include <stddef.h>

/**
 * get_precision - precision from the format string
 * @format: format the string containing conversion specifiers.
 * @pos: pointer to the current position in the format string
 *
 * Return: Precision value, or -2 if precision is not specified
 */

int get_precision(const char *format, int *pos)
{
	int precision = -2;
	int i = *pos;

	if (format[i] == '.')
	{
		i++;
		if (format[i] >= '0' && format[i] <= '9')
		{
			precision = 0;
			while (format[i] >= '0' && format[i] <= '9')
			{
				precision = precision * 10 + (format[i] - '0');
				i++;
			}
		}
		else
		{
			precision = 1;
		}
	}
	*pos = i;
	return (precision);
}

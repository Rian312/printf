#include <stdarg.h>
#include "main.h"

/**
 * get_size - get the size from the format string
 * @format: format string containing conversion specifies
 * @pos: pointers to the current position in the format string
 *
 * Return: Size value or 0 if the size is not specified
 */

int get_size(const char *format, int *pos)
{
	int size = 0;
	int i = *pos;

	if (format[i] == 'h' || format[i] == 'l' || format[i] == 'L')
	{
		size = format[i];
		i++;

		if (format[i] == size)
		{
			size = size == 'h' ? 'H' : 'L';
			i++;
		}
	}

	*pos = i;

	return (size);
}

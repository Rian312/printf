#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - calculates the length of the string
 * @str: the input striing
 *
 * Return: length of the string
 */

int _strlen(const char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		ien++;
	}
	return (len);
}

/**
 * _itoa - converts an integer to a string
 * @num: the integer to convert
 * @str: Buffer to store the resulting string
 *
 * Return: pointer to the resulting string
 */

char *_itoa(int num, char *str)
{
	int i = 0;
	int isNegative = 0;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	{
		do

		str[i++] = num % 10 + '0';
		num = num / 10;
	} while (num != 0);
	if (isNegative)
	{
		str[i++] = '-';
	}

	str[i] = '\0';
	int strat = 0;

	int end = i - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];

		str[end] = temp;

		start++;
		end--;
	}

	return (str);
}


#include "main.h"

/**
 * _printf - Format and print text to the standard output.
 * @format: A pointer to a format string.
 *
 * Description: This function formats and prints text to the standard output,
 * using format specifiers such as '%c', '%d', and '%s' within the format string.
 *
 * Return: The total number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int i;
	int ncount = 0;

	if (format == NULL)
	{
		return -1;
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's' || format[i] == 'i')
			{
				ncount += selector(format[i])(args);
			}
			else
			{
				ncount += _putchar('%');
				continue;
			}
		}
		else
		{
			ncount += _putchar(format[i]);
		}
	}

	return ncount;
}

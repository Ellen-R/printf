#include "main.h"

/**
 * _printf - Format and print text to the standard output.
 * @format: A pointer to a format string.
 *
 * Description: This function formats and prints text to the standard output,
 * using format specifiers as '%c', '%d', and '%s' within the format string.
 *
 * Return: The total number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int i;
	va_list args;
	int output;

	output = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				output += _putchar('%');
			}
			else if (format[i] == 'c' || format[i] == 'd' ||
					format[i] == 's' || format[i] == 'i')
			{
				output += selector(format[i])(args);
			}
			else if (format[i] == 'b')
			{
				output += selector(format[i])(args);
			}
			else if (format[i] == 'u' || format[i] == 'o' ||
					format[i] == 'x' || format[i] == 'X')
			{
				output += selector(format[i])(args);
			}
			else
			{
				output += _putchar('%');
				output += _putchar(format[i]);
				continue;
			}
		}
		else
		{
			output += _putchar(format[i]);
		}
	}

	return (output);
}

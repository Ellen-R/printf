#include "main.h"
/**
 * char_handler - Handles character format specifier.
 * @arg: A va_list containing the character argument.
 *
 * Return: The number of characters printed.
 */
int char_handler(va_list arg)
{
	int count;
	char get_char = va_arg(arg, int);

	count = _putchar(get_char);
	return (count);
}
/**
 * dec_handler - Handles decimal integer format specifier.
 * @arg: A va_list containing the character argument.
 *
 * Return: The number of characters printed.
 */
int dec_handler(va_list arg)
{
	int count;

	int val = va_arg(arg, int);

	count = print_num(val, 0);

	return (count);
}
/**
 * str_handler - Handles string format specifier.
 * @arg: A va_list containing the character argument.
 *
 * Return: The number of characters printed.
 */
int str_handler(va_list arg)
{
	int count = 0;
	char *ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
		count += _putchar(*ptr);
		ptr++;
	}

	return (count);
}
/**
 * int_handler - Handles decimal integer format specifier.
 * @arg: A va_list containing the character argument.
 *
 * Return: The number of characters printed.
 */
int int_handler(va_list arg)
{
	int count;

	int val = va_arg(arg, int);

	count = print_num(val, 0);

	return (count);
}
/**
 * bin_handler - Handles binary integer format specifier.
 * @arg: converts the number to binary
 *
 * Return: The number of characters printed.
 */
int bin_handler(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += print_bin(num);
	return (count);
}
/**
 * uns_handler - Handles unsigned integer format specifier.
 * @arg: converts the number to binary
 *
 * Return: The number of characters printed.
 */
int uns_handler(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += print_unsigned(num, 10);
	return (count);
}
/**
 * oct_handler - Handles octal integer format specifier.
 * @arg: converts the number to binary
 *
 * Return: The number of characters printed.
 */
int oct_handler(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += print_unsigned(num, 8);
	return (count);
}
/**
 * hex_handler - Handles hexadecimal integer format specifier.
 * @arg: converts the number to binary
 *
 * Return: The number of characters printed.
 */
int hex_handler(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += print_unsigned(num, 16);
	return (count);
}
/**
 * hexa_handler - Handles hexadecimal integer format specifier.
 * @arg: converts the number to binary
 *
 * Return: The number of characters printed.
 */
int hexa_handler(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += print_unsigned(num, 16);
	return (count);
}

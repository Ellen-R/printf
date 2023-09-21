#ifndef HANDLERS_H
#define HANDLERS_H
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

	count += print_unsig(num, 10, 0);
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

	count += print_unsig(num, 8, 0);
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

	count += print_unsig(num, 16, 0);
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

	count += print_unsig(num, 16, 1);
	return (count);
}

#endif /*HANDLERS_H*/

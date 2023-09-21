#include "main.h"
/**
 * selector - Selects thecorrect handler function based on a format specifier
 * @str: The format specifier character.
 *
 * Return: A pointer to the selected handler function.
 */
int (*selector(char str))(va_list arg)
{
	if (str == 'c')
	{
		return (&char_handler);
	}
	else if (str == 'd')
	{
		return (&dec_handler);
	}
	else if (str == 's')
	{
		return (&str_handler);
	}
	else if (str == 'i')
	{
		return (&int_handler);
	}
	return (0);
}

#include "main.h"
/**
 * print_num - Print a long integer to the standard output.
 * @num: The long integer to be printed.
 * @count: The count of characters printed so far (used for recursion).
 *
 * Description: This function prints a long integer, handling negative numbers
 * and recursively printing each digit.
 *
 * Return: The total number of characters printed, including digits and a
 * possible '-' sign for negative numbers.
 */
int print_num(long num, int count)
{
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = print_num(num / 10, count);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}

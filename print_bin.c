#include "main.h"

/**
 * print_bin - Prints an unsigned integer in binary format.
 * @num: The unsigned integer to be printed in binary.
 *
 * Description:
 * This function takes an unsigned integer 'num' and prints its binary
 * representation to the standard output.
 *
 * Return: The number of characters printed.
 */

int print_bin(unsigned int num)
{
	int count = 0;
	int binary[32];
	int j, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}

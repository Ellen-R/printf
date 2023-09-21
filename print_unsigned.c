#include "main.h"

/**
 * print_unsig - Description for print_unsigned
 * This function prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 * @base: The base (e.g., 10 for decimal, 8 for octal, 16 for hexadecimal).
 * Return: The number of characters printed.
 */
int print_unsig(unsigned int num, int base, int uppercase)
{
	int count = 0;
	char buffer[32];
	int j, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		int digit = num % base;

		if (digit < 10)
		{
			buffer[i] = digit + '0';
		}
		else
		{
			if (uppercase)
			{
				buffer[i] = digit - 10 + 'A';
			}
			else
			{
				buffer[i] = digit - 10 + 'a';
			}
		}
		num = num / base;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}

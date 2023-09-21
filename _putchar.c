#include "main.h"
/**
 * _putchar - Write a character to the standard output.
 * @c: The character to be written.
 *
 * Description: This function writes a single character to the standard output
 *
 * Return: On success, returns 1. On error, returns -1, setting errno corectly
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

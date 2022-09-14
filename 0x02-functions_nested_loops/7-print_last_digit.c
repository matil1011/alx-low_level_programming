#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: number to be computed.
 *
 * Return: i after the computation.
 */
int print_last_digit(int num)
{
	int i = num % 10;

	if (i < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
}

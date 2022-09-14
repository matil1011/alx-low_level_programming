#include "main.h"

/**
 * _abs - finds the absolute value of a number
 *
 * @num: number to be absolute
 *
 * Return: Always 0 for success
 */

int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);

	return (0);
}

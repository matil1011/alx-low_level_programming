#include "main.h"

/**
*print_alphabet_x10 - Entry point of the program
*
*/

void print_alphabet_x10(void)
{
	int c;
	int i;

	for (c = 1; c <= 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}

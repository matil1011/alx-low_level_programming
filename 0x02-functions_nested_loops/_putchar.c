#include <unistd.h>

/**
 *
 * main - Call other functions
 *
 * Return - Always return 0
 *
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}


#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function to write character `c`
 * to standard output
 * @c: the character to be printed
 *
 * Return: 1 (Success), -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

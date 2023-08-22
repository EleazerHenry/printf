#include "main.h"

/**
 * print_string - a function that loops through a string
 * then prints every character
 * @f: pointer to be used
 * @l: va_list argument to be used
 *
 * Return: number of characters to be printed
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);
	int count;

	(void)f;

	if (!s)
		s = "(null)";
	count = _puts(s);

	return (count);
}

/**
 * print_char - a function to print characters
 * @f: pointer to be used
 * @l: va_list argumets
 *
 * Return: print number of characters
 */

int print_char(va_list l, flags_t *f)
{
	int count;

	(void)f;
	_putchar(va_arg(l, int));
	count = 1;

	return (count);
}

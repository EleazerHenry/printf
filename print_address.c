#include "main.h"

/**
 * print_address - a function that prints the address
 * of input in hexadecimal
 * @f: pointer to the struct flags that determines
 * if flag is passed tp printf
 * @l: va_list argument from printf
 * Return: number of characters to be printed
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));

	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);

	return (count);
}

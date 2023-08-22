#include "main.h"

/**
 * print_hex - a fuction that prints a number in
 * hexadecimal base in lowercase
 * @f: pointer to to be used
 * @l: va_list argument
 *
 * Return: number of characters to be printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);

	return (count);
}

/**
 * print_hex_big - a function to print a number
 * in hexadecimal base in uppercase
 * @f: pointer to be used
 * @l: va_list arguments
 *
 * Return: number of characters
 */

int print_hex_big(va_list l, flags_t *f)
{
	int count = 0;
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);

	return (count);
}

/**
 * print_binary - a function that prints number in base 2
 * @f: pointer to be used
 * @l: va_list arguments
 *
 * Return: number of characters to be printed
 */

int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;

	return (_puts(str));
}

/**
 * print_octal - a function that prints a number in base 8
 * @f: pointer to be used
 * @l: va_list arguments
 *
 * Return: number of characters to be printed
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);

	return (count);
}

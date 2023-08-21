#include "main.h"

/**
 * _printf - a function that print output
 * according to a format
 * @format: character string to be used
 * Return: number of characters to be printed
 */

int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					char_print += printf("%c", va_arg(args, int));
					break;

				case 's':
					char_print += printf("%s", va_arg(args, char*));
					break;

				case '%':
					char_print += printf("%%");
					break;

				default:
					char_print += printf("%%%c", *format);
					break;
			}
		}
		else
		{
			putchar(*format);
			char_print++;
		}
		format++;
	}

	va_end(args);
	return (char_print);
}

#include "main.h"

/**
 *  _printf - a function that will print
 *  output arguments according to a format
 *  @format: character string to be utilised
 *  Return: Number of characters to be printed
 *  to standard output
 */

int _printf(const char *format, ...)
{
	int w, p_cnt = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (w = 0; format[w] != '\0'; w++)
	{
		if (format[w] != '%')
		{
			_putchar(format[w]);
		}
		else if (format[w + 1] == 'c')
		{
			_putchar((char)(va_arg(args, int)));
			w++;
		}
		else if (format[w + 1] == 's')
		{
			p_cnt += _putstr(va_arg(args, char *));
			w++;
		}
		else if (format[w + 1] == '%')
		{
			_putchar('%');
			w++;
		}

		p_cnt += 1;
	}
	va_end(args);

	return (p_cnt);
}

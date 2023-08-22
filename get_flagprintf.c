#include "main.h"

/**
 * get_flag - a function that turns on flags if
 * _printf finds a flag modifier in format string
 * @f: pointer to the struct flags to be used
 * @s: character specifier to be used
 *
 * Return: 1 if flag works, 0 otherwise
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			berak;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}

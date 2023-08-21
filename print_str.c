#include "main.h"

/**
 * _putstr - a function to print a string
 * @s: string to be used
 * Return: p_cnt
 */

int _putstr(char *s)
{
	int len = 0, p_cnt = 0;

	if (s)
	{
		while (*(s + len))
		{
			_putchar(*(s + len++));
			p_cnt += 1;
		}
	}
	return (p_cnt);
}

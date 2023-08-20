#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct display - a printer function for struct
 * @display: To be utilised
 * @s: pointer to be utilised
 */

typedef struct display
{
	char *display;
	int (*s)(va_list, char *, unsigned int);
} display_t;

int _printf(const char *format, ...);



#endif

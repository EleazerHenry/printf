#ifndef MAIN_H
#define MAIN_H

/* Standard library in C */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/* Function prototypes*/
int _printf_with_spec(va_list arv, char conversion_spec);
int _putstr(char *s);
int _printf_int(int n);
int _printf(const char *format, ...);
int _putchar(char c);

#endif

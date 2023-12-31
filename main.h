#ifndef MAIN_H
#define MAIN_H

/*Functions Headers */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * @width: flag for width specifier
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int width;
} flags_x;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @y: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*y)(va_list ap, flags_x *y);
} ph;

/* All printf prototype functions are listed below */

/* print_nums */
int print_int(va_list vi, flags_x *y);
void print_number(int n);
int print_unsigned(va_list vi, flags_x *y);
int count_digit(int i);

/* print_bases */
int print_hex(va_list vi, flags_x *y);
int print_hex_big(va_list vi, flags_x *y);
int print_binary(va_list vi, flags_x *y);
int print_octal(va_list vi, flags_x *y);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_x *);

/* get_flag */
int get_flag(char s, flags_x *y);

/* print_alpha */
int print_string(va_list vi, flags_x *y);
int print_char(va_list vi, flags_x *y);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list vi, flags_x *y);
int print_rev(va_list vi, flags_x *y);
int print_bigS(va_list vi, flags_x *y);

/* print_address */
int print_address(va_list vi, flags_x *y);

/* print_percent */
int print_percent(va_list vi, flags_x *y);

int handle_width(va_list vi, flags_x *y);
#endif

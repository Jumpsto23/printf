#ifndef MAIN_H
#define MAIN_H
#include  <stdarg.h>
#include <stdio.h>
#include <unistd,h>

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/* SIZES */

#define S_LONG 2
#define S_SHORT 1

/* width handler */


int handle_write_char(char c, char buffer[],int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(cahr buffer[], int ind, int lenght, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsigned(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

/*********** UTILS **********/

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/* SIZES */

#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - struct op
 *
 * @fmt: Format
 * @fn: Associated function
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
}

/**
 * typedef struct fmt fmt_t - struct op
 * @fmt: Format
 * @fm_t: Associated funtion
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/* Function to print chars and strings */

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int witdth, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int size, int width);

/* Function to print numbers */

int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int width, int precision, int size, int flags);
int print_unsigned(va_list types, char buffer[], int flags, int precision, int size, int width);
int print_octal(va_list types, char buffer[], int flags, int precision, int width, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list type, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Flags */

#define F_MINUS 1
#define F_MINUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Function to print non printable characters */

int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Function to handle specifiers */

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Function to print string in rot 13 */

int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Function to print string in reverse */

int print_reverse(va_list types, char buffer[], int size, int flags, int width, int precision);

#endif  /* MAIN_H */

#include "main.h"

/**
 * is_printable - Checks if character is printable
 * @c: Character to check
 *
 * Return: On success 1
 */

int is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Shows ascii in hexadecimal code to buffer
 * @buffer: Character array
 * @i: index of arrays
 * @ascii_code: ASCII value
 * Return: On success 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* hexa code format is always 2 digits */

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
}

/**
 * convert_size_number - Function places number to a specific number
 * @num: Number to allocate
 * @size: number allocated to size
 *
 * Return: On sucess value of num
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * is_digit - checks if character is a digit
 * @c: Character to check
 *
 * Return: On success 1
 */

int is_digit(char c)
{
	if (c >= '0' && c < '9')
		return (1);

	return (0);
}

/**
 * convert_size_unsgnd - Places number to a specific size
 * @num: Number to allocate
 * @size: Amount allocated
 *
 * Return: On sucess Value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

			return ((unsigned int)num);
}

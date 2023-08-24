#include "main.h"

/**
 * get_size - This function calculate the size
 * @i: The argument to be outputed
 * @format: The string to print the arguments.
 *
 * Return: On success Precision.
 */

int get_size(const char *format, intr *i)
{
	int curr_i = *i + i;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}

#include <unistd.h>
/* _putchar - function to return character to stdout */
/**
 * _putchar - Function prints a char
 * @c: char to print
 *
 * Return: On success char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

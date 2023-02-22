#include <main.h>
#include <unistd.h>
/**
 * _putchar - print char c to stdout
 * @c: char to write
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

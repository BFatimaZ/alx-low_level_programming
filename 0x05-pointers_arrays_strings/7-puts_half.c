#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 */
void puts_half(char *str)
{
	int i, n, L = 0;

	for (i = 0; str[i] != '\0'; i++)
		L++;
	n = (L / 2);
	if ((L % 2) == 1)
		n = ((L + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

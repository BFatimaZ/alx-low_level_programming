#include "main.h"
/**
 * _strlen_recursion - Length of a string.
 * @s: The string to be measured.
 * Return: L: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int L = 0;

	if (*s)
	{
		L++;
		L += _strlen_recursion(s + 1);
	}
	return (L);
}

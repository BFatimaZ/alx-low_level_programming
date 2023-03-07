#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory are with @b.
 * @s: Pointer to be filled.
 * @b: Character to fill the memory area with.
 * @n: Number of bytes to be filled.
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

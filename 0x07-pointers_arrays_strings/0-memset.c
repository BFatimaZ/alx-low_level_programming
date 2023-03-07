#include "main.h"
/**
 * * _memset - Fills the first n bytes of the memory are with @b.
 * @s: Pointer to be filled.
 * @b: Character to fill the memory area with.
 * @n: Number of bytes to be filled.
 * Return:@s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

#include "main.h"
/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0, dest_L = 0;

	while (dest[i++ != '\0'])
		dest_L++;
	desr_L++;
	for (i = 0; src[i]; i++)
		dest[dest_L++] = src[i];
	return (dest);
}

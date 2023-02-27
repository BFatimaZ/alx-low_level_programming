#include "main.h"

/**
 * char *_strcpy - Copies function
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, L = 0;

	while (*(src + L) != '\0')
		L++;
	for (i = 0 ; i < L ; i++)
		dest[i] = src[i];
	dest[L] = '\0';
	return (dest);
}

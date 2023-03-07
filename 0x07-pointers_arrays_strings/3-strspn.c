i#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, n = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		i++;
	}
	return (n);
}

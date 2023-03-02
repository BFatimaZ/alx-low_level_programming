#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encoder rot13
 * @s: pointer to string params
 * Return: pointer s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char t1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char trot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == t1[j])
			{
				s[i] = trot[j];
				break;
			}
		}
	}
	return (s);
}

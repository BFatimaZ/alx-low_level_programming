#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int L = 0;
	int i;

	while (s[L] != '\0')
	L++;
	for (i = 0; i < L; i++)
	{
		L--;
		rev = s[i];
		s[i] = s[L];
		s[L] = rev;
	}
}

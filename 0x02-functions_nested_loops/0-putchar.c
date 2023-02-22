#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int ch[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, n;

	n = sizeof(ch) / sizeof(int);
	for (i = 0; i < n; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}

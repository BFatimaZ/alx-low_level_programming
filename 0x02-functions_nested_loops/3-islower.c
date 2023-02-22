#include "main.h"
/**
 *_islower - check char
 *@c: char to check
 *Return: 0 if the char is lower, 1 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

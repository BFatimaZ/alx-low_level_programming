#include "main.h"

/**
 *_abs - prints the absolute value of an integer.
 *@a: Integer to compute its absolute value.
 *Return: returns the abs value.
 *
 */
int _abs(int a)
{
	int m = a;
	int absV;

	if (m < 0)
	{
		m = m * (-1);
	}
	absV = m;
	return (absV);
}

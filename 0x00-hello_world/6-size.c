#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer
 * Return: 0 The program should end with 0
 */
int main(void)
{
char c;
int a;
long int b;
long long int d;
float x;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));

return (0);
}

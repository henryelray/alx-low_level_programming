#include "main.h"
/**
 * print_last_digit - program that prints _putchar, followed by a new line.
 * @k: absolute value
 * Return: integer
*/
int print_last_digit(int k)
{
	int ld = k % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}

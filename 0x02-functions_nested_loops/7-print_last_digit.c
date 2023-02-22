#include "main.h"
/**
 * print_last_digit - program that prints _putchar, followed by a new line.
 * Return: Always (0 == Success)
*/
int print_last_digit(int n)
{
	int last_digit;

	int number = 98;

	last_digit = number % 10;

	_putchar('0' + last_digit);
	_putchar('\n');
	return (0);
}

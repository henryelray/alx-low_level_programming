#include "main.h"
/**
 * main - Entry point of program
 * Description: prints the alphabet, in lowercase.
 * Return: Always (0 == Success)
*/
void print_alphabet(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	return (0);
}

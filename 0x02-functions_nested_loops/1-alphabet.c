#include "main.h"
/*
 * main - code to print a to z
 *
 * Return 0 means successful
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

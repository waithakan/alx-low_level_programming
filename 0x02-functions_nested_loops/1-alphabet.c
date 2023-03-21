#include "main.h"
/**
 * print_alphabet- prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, otherwise if 0
 */

int _isdigit(int x)
{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}

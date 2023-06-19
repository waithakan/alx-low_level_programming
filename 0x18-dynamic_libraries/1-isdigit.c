#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 * Return: 1 for chaaracter that will be a didgit or 0 for any else
 */

int _isdigit(int c)

{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

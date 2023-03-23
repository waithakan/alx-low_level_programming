#include "main.h"
/**
 * positive_or_negative - checks for positive or negative integers
 * Return:if 0 exit properly
 * @i: the integer ti be checked
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

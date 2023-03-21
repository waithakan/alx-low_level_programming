#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i=0;
	long j =1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	print("%ld", j);
	else if (i == 1)
	print(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	print (", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}

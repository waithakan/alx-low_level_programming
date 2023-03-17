#include <stdio.h>
/**
 * main - is the main function
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("The size of int is:%lu.\n", (sizeof(int)));
	printf("The size of double is:%lu.\n", (sizeof(double)));
	printf("The size of char is:%lu.\n", (sizeof(char)));
	printf("The size of long long int is:%lu.\n", (sizeof(long long int)));
	printf("The size of long int is:%lu.\n", (sizeof(long int)));
	printf("The size of float is:%lu.\n", (sizeof(float)));
	return (0);
}

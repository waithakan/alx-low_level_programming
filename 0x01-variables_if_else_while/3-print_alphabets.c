#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return:if 0 exits properly, non-zero otherwise
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

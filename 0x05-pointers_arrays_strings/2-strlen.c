#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the lenght of string
 * @s: string to be checked
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

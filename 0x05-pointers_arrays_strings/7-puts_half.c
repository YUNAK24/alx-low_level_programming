#include "main.h"

/**
*puts_half - prints a string
*@str: string to print
*Return: nothing
*/

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + 1));
	putchar(10);
}

/**
*_strlen - returns the length of string
*@s: string
*Return: length of given string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
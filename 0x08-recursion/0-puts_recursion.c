#include "main.h"

/**
 * _puts_recursion - prints s  string followed by a new line
 * @s: string to be printed
 * Return: void
 */

voidd _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

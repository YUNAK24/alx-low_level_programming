#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - prints string in a reverse
*order
*@s: String to reverse
*Return: nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

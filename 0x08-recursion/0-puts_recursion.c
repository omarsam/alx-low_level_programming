#include "main.h"

/**
 * _puts_recursion -function that prints a string, followed by a new line
 *
 * @s: char to be printed
 * Created by Omar El-Shazly
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (!*s)
	{
		_putchar('\n');
		return;
	}
}

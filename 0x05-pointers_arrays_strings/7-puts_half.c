#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string value
 *
 * Created by Omar El-Shazly
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		j = str[i];
		i++;
		_putchar(j);
	}
	_putchar('\n');
}

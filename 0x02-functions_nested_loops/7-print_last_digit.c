#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to be tested
 *
 * Return: 0 Always
 *
 * Created by Omar El-Shazly
 */

int print_last_digit(int n)
{
	int c;

	c = (n % 10);

	if (c < 0)
	{
		c = (-1 * n);
	}

	_putchar(c + '0');
	return (c);
}

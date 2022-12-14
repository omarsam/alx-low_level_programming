#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @nld: number to be tested
 *
 * Return: 0 Always
 *
 * Created by Omar El-Shazly
 */

int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}

#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Created by Omar El-Shazly
 */

void more_numbers(void)
{
	int n, t, u, r;

	for (r = 1; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			t = n / 10;
			u = n % 10;
			if (n > 9)
				_putchar(t + '0');

			_putchar(u + '0');
		}
		_putchar('\n');
	}
}

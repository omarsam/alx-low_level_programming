#include "main.h"

/**
 * _pow_recursion - unction that returns the value of x
 * raised to the power of y
 * @x: int 1
 * @y: int 2
 * Return: th value of qalculations
 *
 * Created by omar El-Shazly
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
	{
		int tmpY = y - 1;

		return (x * _pow_recursion(x, (tmpY)));
	}
	else
		return (1);
}
